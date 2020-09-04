//Este arquivo: interface.c
//Neste arquivo se encontram as funções de interação direta com o usuário.
//Data: 04/09/2020
//////////////////////
#include "interface.h"
#include <stdio.h>

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
