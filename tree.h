//Este Arquivo: Tree.h
//Neste Arquivo se encontram os prototipos das funções de manipulação das funções de Arvore
//Data: 08/09/2020
/////////////////////
#ifndef _TREE_H
#define _TREE_H

typedef struct tree{
    typeStudent academic;
    struct tree *left;
    struct tree *right;
}treeNode;

treeNode * createLeaf();
void startLeaf(treeNode *new);
treeNode * insertNode(treeNode *new, char *studentName, int sorterNumb);
int printTree(treeNode *tree);
#endif
