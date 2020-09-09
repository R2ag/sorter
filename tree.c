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

int printTree(treeNode *tree, int countNode, int qtdAlGrp, int sobraAlunos, int flag){
    if (tree->left != NULL){
        countNode = printTree(tree->left, countNode);
    }

    if (countNode == 0) {
        alerta(5);
    }
    if (flag == 1) {
        if (countNode%qtdAlGrp == 0) {
            printGroup((countNode/qtdAlGrp)+1);
        }
    }else if (flag == 0){
        if(sobraAlunos >= (countNode/qtdAlGrp+1)){
            if (countNode == 0 || (countNode%(qtdAlGrp+1) == 0 && countNode != 0){
                printGroup((countNode/qtdAlGrp)+1);
            }
        }else if ((countNode-sobraAlunos)%qtdAlGrp == 0){
            printGroup((countNode/qtdAlGrp)+1);
        }
    }
    printAluno(tree->academic.name);
    countNode++;

    if (tree->right != NULL){
        countNode = rintTree(tree->right, countNode);
    }

    return countNode;
}
