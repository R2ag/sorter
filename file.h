#ifndef _FILE_H
#define _FILE_H

//Função que abre o arquivo de texto.
void openFile(buff *bfNms, int *bfQtdAln, int *bffFlg);

//Função para verificar se o arquivo é valido para a aplicação.
int validador(FILE *arq);
/*
Para ser valido para a execução, o arquivo deve atender as seguintes especificacoes:
    1 - A primeira linha deve ter um numero inteiro indicando a quantidade de alunos presentes na turma;
    2 - A segunda linha deve conter um valor inteiro entre 0 e 1, que será utilizadi como instrução pelo app;
    3 - O arquivo deve ter mais de duas linhas, sendo que a partir da terceira, devem estar os nomes dos alunos;
*/

//Função para listar os alunos presentes no arquivo.
void listarAlunos(FILE *arq);
#endif
