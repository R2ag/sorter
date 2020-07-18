//Este Arquivo: lista.c
//Neste arquivo se encontram as funções de manipulação de uma lista.
//Autor: Rafael Lacerda 'RLAG'
//Data: 16/07/2020

//////////////////////

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void createNode(node *n){
    n = (node*) malloc(sizeof(node));
}

void startList(node *n) {
    n->next = NULL;
    n->prev = NULL;
}

void insertInit(node *n, data info){
    node newNode;
    createNode(newNode);
    newNode->info = info;
    newNode->next = n->next;
    if(n->next != NULL)
        newNode->next->prev = newNode;
    newNode->prev = n;
    n->next = newNode;
}

void insertEnd(node *n, data info){
    node newNode;
    createNode(newNode);
    for(node *aux = n; aux->next != NULL; aux = aux->next);
    aux->next = newNode;
    newNode->info = info;
    newNode->prev = aux;
    newNode->next = NULL;
}

/*
void exibe(node *LISTA);
void libera(node *LISTA);
void insere (node *LISTA);
node *retiraInicio(node *LISTA);
node *retiraFim(node *LISTA);
node *retira(node *LISTA);
*/
