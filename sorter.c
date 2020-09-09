//Este Arquivo: sorter.c
//Neste arquivo se encontram as funções responsaveis por sortear os grupos.
//Data: 04/09/2020
//////////////////////
#include "sorter.h"
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void groupSort(treeNode *buffer, node *bffNames){
    int sorterKey;
    srand(time(NULL));
    while (bffNames->next != NULL){
        sorterKey = rand()%1000;
        buffer = insertNode(buffer, bffNames->info, sorterKey);
        bffNames = bffNames->next;
    }
    alerta(3);
}

void printGroup(structureContainer *turma){
    int qtdGrupos = turma.qtdAlunos/turma.qtdAlnGrupos;
    int alunsSobrando = turma.qtdAlunos % turma.qtdAlnGrupos;

    int n = printTree(turma->colection, 0, turma.qtdAlnGrupos, alunsSobrando, turma.flag);
}
