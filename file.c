//Este arquivo: File.c
//Neste arquivo se encontram as funções responsáveis por manipular arquivos.
//Data:04/09/2020
#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *openFile(){
    FILE *arquivo;
    char urlArquivo[MAX];
    int flagArquivoLocalizado;
    int flagArquivoValido;
    do {
        nameFile(urlArquivo);
        arquivo = fopen(url, "r");
        if(arquivo!= NULL){
            flagArquivoLocalizado = 1;
        }else{
            flagArquivoLocalizado = 0;
        }
        statusArquivo(flagArquivoLocalizado);
        flagArquivoValido = validador(arquivo);
        statusLayout(flagArquivoValido);
    } while(flagArquivoLocalizado == 1 && flagArquivoValido == 1);

    return arquivo;
}

//Não terminado
int validador(FILE *arq){

}


void listarAlunos(FILE *arq){
    char nome[MAX];
    int cont = 0;
    while((fgets(nome, sizeof(nome),listaAlunos))!=NULL){
            printAluno(nome, cont);
            cont++;
    }
}
