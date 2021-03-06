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
        printf("4 - Imprimir Grupos\n");
        printf("5 - Gerar Relatório\n");
        printf("6 - Sair\n");
        scanf("%d", &opcao);
        system('clear');
        if (opcao < 1 || opcao > 6){
            alerta(2);
        }
    }while(opcao<1 || opcao>6);
    return(opcao);
}

void nameFile(char *url){
  printf("Digite o Nome do Arquivo com a lista de alunos: ");
  scanf("%s", url);
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
    if(op == 0)
        printf("O arquivo carregado atende as especificacoes!\n");
        return;

    if (op >= 100){
        printf("O Arquivo nao atende as especificacoes desejadas!\n");
        printf("O arquivo não possui alunos cadastrados.\n");
        op = op%100;
    }
    if (op >= 10) {
        printf("O Arquivo nao atende as especificacoes desejadas!\n");
        printf("Opcao invalida para formato dos grupos.\n");
        op = op%10;
    }
    if (op>=1) {
        printf("O Arquivo nao atende as especificacoes desejadas!\n");
        printf("Valor Invalido para quantidade de alunos por grupo.\n");
    }
}

void printAluno(char *name){
    printf("%d - %s\n", name);
}

void printGroup(int idGroup){
    printf("Grupo %d\n",idGroup );
}

void alerta(int op){
    switch (op) {
        case 1:
            printf("Funcao nao habilitada no momento. favor, carregue o arquivo antes de prosseguir.\n");
            break;
        case 2:
            printf("Funcao invalida! favor, escolha uma funcao valida.\n");
            break;
        case 3:
            printf("Grupos Sorteados com sucesso!\n");
            break;
        case 4:
            printf("LISTAGEM DE ALUNOS\n\n");
            break;
        case 5:
            printf("LISTAGEM DE GRUPOS\n\n");
            break;
        case 6:
            printf("Não foi possivel gerar o relatorio!\n\n");
            break;
    }

}
