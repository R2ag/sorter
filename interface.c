//Este arquivo: interface.c
//Neste arquivo se encontram as funções de interação direta com o usuário.
//Data: 04/09/2020
//////////////////////
#include "interface.h"
#include <stdio.h>

int menu(){
  int opcao;
  do{
    printf("1 - Carregar Arquivo\n");
    printf("2 - Sortear os grupos\n");
    printf("3 - Listar Alunos\n");
    printf("4 - Gerar Relatório\n");
    printf("5 - Sair\n");
    scanf("%d", &opcao);
}while(opcao<1 || opcao>5);
  return(opcao);
  system('clear');
}

void nomeFile(char *url){
  printf("Digite o Nome do Arquivo com a lista de alunos: ");
  scanf("%[^\n]s", url);
}

void statusArquivo(int op){
    switch (op){
        case 0:
            printf("Arquivo carregado com sucesso!\n");
        case 1:
            printf("Arquivo nao localizado!\n");
        default:
            printf("Erro desconhecido!\n");
    }
}
