//Este arquivo: File.c
//Neste arquivo se encontram as funções responsáveis por manipular arquivos.
//Data:04/09/2020
#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void openFile(node *bfNms, int *bfQtdAln, int *bffFlg, int *count){
    FILE *arquivo;
    char urlArquivo[MAX];
    int flagArquivoLocalizado;
    int flagArquivoValido;
    do {
        nameFile(urlArquivo);
        arquivo = fopen(urlArquivo, "r");
        if(arquivo!= NULL){
            flagArquivoLocalizado = 1;
        }else{
            flagArquivoLocalizado = 0;
        }

        statusArquivo(flagArquivoLocalizado);

        flagArquivoValido = validador(arquivo, bfNms, bfQtdAln, bffFlg);
        statusLayout(flagArquivoValido);

    } while(flagArquivoLocalizado != 0 || flagArquivoValido != 0);

    fclose(arquivo);
}

//Não terminado
int validador(FILE *arq, node *bfNms, int *bfQtdAln, int *bffFlg, int *cont){
    cont = 0;
    int flagControll = 0;
    char name[MAX];

    fscanf(arq,"%d \n %d", bfQtdAln, bffFlg);
    fseek(arq, 3, SEEK_SET);
    while ((fscanf(arq, "%s\n", name))!=EOF){
        insertEnd(bfNms, name);
        cont++;
    }
    if(qtdAlunosGrupos <= 0){
        flagControll = 1;
    }

    if(flagGrupos < 0 && flagGrupos > 1){
        flagControll = 10;
    }
    if(cont < 0){
        flagControll = 100;
    }
    return flagControll;
}

void gerarRelatorio(structureContainer info){
    FILE *relatorio = fopen("relatorio.txt", wf)
    if (relatorio == NULL){
        alerta(6);
        return;
    }
    fileWrite(relatorio);
    int n = climbTree(infotree->left, countNode, qtdAlGrp, sobraAlunos, flag, flagDestino);


}

void fileWrite(FILE *arq){
    fprintf(arq, "-----------------------------------------------------\n");
    fprintf(arq, "BSI - ED 2020-1 Equipe 1 - Antonielly, Mario & Rafael\n");
    fprintf(arq, "Relação de grupos aleatórios com 2 elementos\n");
    fprintf(arq, "-----------------------------------------------------\n");

}

void writeGroup(int n){

}
