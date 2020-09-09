//Este Arquivo: Tree.h
//Neste Arquivo se encontram os prototipos das funções de manipulação das funções de Arvore
//Data: 08/09/2020
/////////////////////

#include "tree.h"
#include <stdio.h>
#include <string.h>

treeNode * createLeaf(){
    treeNode *new = (treeNode*) malloc(sizeof(treeNode));
    return n;
}

void startLeaf(treeNode *new) {
    new->left = NULL;
    new->right = NULL;
}

treeNode * insertNode(treeNode *new, char *studentName, int sorterNumb){
    if (new == NULL){
        new = createLeaf();
        startLeaf(new);
        new->academic.key = sorterNumb;
        strcpy(new->academic.name, studentName);
    }else if (sorterNumb < new->academic.key) {
        new->left = insertNode(new->left, studentName, sorterNumb);
    }else{
        new->right = insertNode(new->right, studentName, sorterNumb);
    }
    return new;
}
