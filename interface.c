//Este arquivo: interface.c
//Neste arquivo se encontram as funções de interação direta com o usuário.
//Data: 04/09/2020
//////////////////////
#include "interface.h"
#include <stdio.h>

int menu(){
    int opcao;
    do{
        printf("ORGANIZAÇÃO DE GRUPOS ALEATÓRIOS\n");
        printf("Digite o numero referente a função desejada\n\n");
        printf("1 - Carregar Arquivo\n");
        printf("2 - Listar Alunos\n");
        printf("3 - Sortear os grupos\n");
        printf("4 - Gerar Relatório\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);
        system('clear');
    }while(opcao<1 || opcao>5);
    return(opcao);
}

void nameFile(char *url){
  printf("Digite o Nome do Arquivo com a lista de alunos: ");
  scanf("%[^\n]s", url);
}

void statusArquivo(int op){
    switch (op){
        case 0:
            printf("Arquivo nao localizado!\n");
            printf("Digite o endereco correto do arquivo.\n");
        case 1:
            printf("Arquivo carregado com sucesso!\n");
        default:
            printf("Erro desconhecido!\n");
    }
}

void statusLayout(int op){
    switch (op){
        case 0:
            printf("O arquivo carregado atende as especificacoes!\n");
            printf("Digite o endereco de um arquivo que atenda as especificacoes.\n");
        case 1:
            printf("O Arquivo nao atende as especificacoes desejadas!\n");
            printf("Valor Invalido para quantidade de alunos por grupo.\n");
        case 2:
            printf("O Arquivo nao atende as especificacoes desejadas!\n");
            printf("Opcao invalida para formato dos grupos.\n");
        case 3:
            printf("O Arquivo nao atende as especificacoes desejadas!\n");
            printf("O arquivo não possui alunos cadastrados.\n");
        default:
            printf("Erro desconhecido!\n");
    }
}

void printAluno(char *name, int cont){
    if (cont == 0)
        printf("LISTAGEM DE ALUNOS\n\n");
    printf("%d - %s\n", cont+1, name);
}
void alerta(){
    printf("Funcao nao habilitada no momento. favor, carregue o arquivo antes de prosseguir.\n");
}
