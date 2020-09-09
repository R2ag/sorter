/*Este Arquivo: sorter.h*/
/*Neste arquivo se encontram os prototipos das funções responsaveis por sortear os grupos.*/
/*Data: 17/07/2020*/
/*----------------------*/

#ifndef _SORTER_H
#define _SORTER_H

//Define a constante MAX como 52. Essa constante é utilizada na criação de strings
#define MAX 52

typedef struct structure {
    int qtdAlunos;
    int qtdAlunosGrupos;
    int flag;
    treeNode *colection;
}structureContainer;

typedef struct student{
    char name[MAX];
    int key;
}typeStudent;

void groupSort(structureContainer *buffer, node *BffNames);




#endif
