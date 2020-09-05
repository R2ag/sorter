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
    int cont = -2;
    int qtdAlunosGrupos;
    int flagGrupos;
    int flagControll = 0;

    fscanf(arq,"%d \n %d", &qtdAlunosGrupos, &flagGrupos);
    if(qtdAlunosGrupos <= 0){
        flagControll = 1;
        return flagControll;
    }

    if(flagGrupos < 0 && flagGrupos > 1){
        flagControll = 2;
        return flagControll;
    }

    while( (ch=fgetc(arq))!= EOF )
        if(ch == '\n')
            cont++;
    if(cont > 0){
        flagControll = 3;
        return flagControll;
    }
    return flagControll;
}


void listarAlunos(FILE *arq){
    char nome[MAX];
    int cont = 0;
    while((fgets(nome, sizeof(nome),listaAlunos))!=NULL){
            printAluno(nome, cont);
            cont++;
    }
}
