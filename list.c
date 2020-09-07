//Este Arquivo: lista.c
//Neste arquivo se encontram as funções de manipulação de uma lista.
//Data: 07/09/2020
//////////////////////

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void createNode(node *n){
    n = (node*) malloc(sizeof(node));
}

void startList(node *n) {
    n->next = NULL;
}

void insertEnd(node *n, char *info){
    node newNode;
    createNode(newNode);
    for(node *aux = n; aux->next != NULL; aux = aux->next);
    aux->next = newNode;
    strcpy(newNode->info, info);
    newNode->next = NULL;
}
