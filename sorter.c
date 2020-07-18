//Este Arquivo: sorter.c
//Neste arquivo se encontram as funções responsaveis por sortear os grupos.
//Autor: Rafael Lacerda 'RLAG'
//Data: 17/07/2020

//////////////////////
#include "sorter.h"
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funções já estruturadas
int menu(){
  int opcao;
  do{
    printf("1 - Listar Alunos\n");
    printf("2 - Sortear os grupos\n");
    printf("3 - Sair\n");
    scanf("%d", &opcao);
  }while(opcao<1 || opcao>3);
  return(opcao);
}

void nomeFile(char *url){
  printf("Digite o Nome do Arquivo com a lista de alunos: ");
  scanf("%[^\n]s", url);
}

//Funções a serem modificadas.
void enQueue(qu* q, char *newItem, int priorItem){
  int i = q->rear;
	int iAnterior;
  if(isFull(q)){
    printf("A fila esta cheia!!!");
  }else{
    strcpy(q->estudante[i].nome, newItem);
    q->prior[i] = priorItem;
		iAnterior = (i == 0)? MAX - 1: i -1;
		while(i != (q->front) && priorItem > q->prior[iAnterior]){
      strcpy(q->estudante[i].nome, q->estudante[iAnterior].nome);
      strcpy(q->estudante[iAnterior].nome, newItem);
			q->prior[i] = q->prior[iAnterior];
			q->prior[iAnterior] = priorItem;
			i = (i == -1)? MAX - 1:i - 1;
			iAnterior = (i == 0)? MAX - 1: i -1;
		}
		q->rear = (q->rear +1) % MAX;

  }
}





void listarAlunos(char *url){
  FILE *listaAlunos;
  char nome[MAX];
  listaAlunos = fopen(url,"r");
  printf("\nAlunos\n\n");
  while((fgets(nome, sizeof(nome),listaAlunos))!=NULL)
    printf("%s\n",nome);

  printf("\n");
  sleep(5);
  system("clear");
  fclose(listaAlunos);
}

void sortearGrupos(char *urlArquivo, qu *listaAlunos){
  FILE *arq = fopen(urlArquivo, "r");
  char nome[MAX];
  int sortear;
  int qtdGrupos = 0;
  int contador = 0;
  while((fgets(nome, sizeof(nome),arq))!=NULL) {
    sortear = rand()%1000; // Sorteia os nomes
    enQueue(listaAlunos, nome, sortear); // enfilera o nome dos alunos, baseado nos nomes sorteados pelo rand
    contador++;
  }

  do{
    printf("Informe a quantidade de alunos por grupo: \n");
    scanf("%d", &qtdGrupos);
  }while(qtdGrupos <= 0);
  int divisaoGrupos = contador/qtdGrupos; // Número de grupos
  int restoGrupos = contador%qtdGrupos; // Alunos que sobraram
  int opcGrupos;
  if (restoGrupos != 0) {
    do {
      printf("Com a divisão utilizada, sobram %d alunos. O que fazer?\n", restoGrupos);
      printf("1 - Criar um novo Grupo\n2 - Alocar os alunos que sobraram em grupos preexistentes\nDigite A opção desejada: ");
      scanf("%d", &opcGrupos);
    }while(opcGrupos < 1 || opcGrupos > 2);
  }
  if (opcGrupos == 1 || restoGrupos == 0) {//o fluxo vai entrar se não tiver alunos sobrando ou se os alunos que sobraram vao formar mais um grupo
    for (int i = 0; i < divisaoGrupos+opcGrupos; i++){//opcGrupos vai determinar se teremos um grupo extra ou não
      printf("\nGrupo %d\n",i+1);
      for (int j = i*qtdGrupos; (j < ((i+1)*qtdGrupos) && j != listaAlunos->rear); j++) {
        printf("%s", listaAlunos->estudante[j].nome);
      }
    }
  }
  if (opcGrupos == 2){
    for (int i = 0; i < divisaoGrupos; i++){
      printf("\nGrupo %d\n",i+1);
      if ((i+1) <= restoGrupos){
        for (int j = i*qtdGrupos; (j < ((i+1)*qtdGrupos)+1 && j != listaAlunos->rear); j++) {
          printf("%s", listaAlunos->estudante[j].nome);
        }
      }else{
        for (int j = i*qtdGrupos; (j < ((i+1)*qtdGrupos) && j != listaAlunos->rear); j++) {
          printf("%s", listaAlunos->estudante[j].nome);
        }
      }
    }
  }
  fclose(arq);
}
