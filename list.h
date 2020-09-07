/*Este Arquivo: lista.h*/
/*Neste arquivo se encontram os prototipos das funções de manipulação de uma lista*/
/*Data: 07/09/2020*/
/*----------------------*/

#ifndef _LIST_H
#define _LIST_H

/*Estrutura de um nó usado para armazenar as informações da fila.*/
typedef struct NODE {
    node *next;
    char info[MAX];
}node;

/*Prototipos das funções da biblioteca*/
//A função createNode cria um novo nó e aloca a memoria necessaria para o armazenar.
void createNode(node *n);

//A função startList inicia a lista, indicando aos apontadores que o proximo nó na lista é NULL.
void startList(node *n);

//A função insertEnd insere um novo nó no final da lista
void insertEnd(node *n, char *info);

//Função para listar os alunos carregados do arquivo.
void listarAlunos(bufferNames);
#endif
