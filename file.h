#ifndef FILE_H
#define FILE_H

//Função que abre o arquivo de texto.
FILE *openFile();

//Função para verificar se o arquivo é valido para a aplicação.
int validador(FILE *arq);
/*
Para ser valido para a execução, o arquivo deve atender as seguintes especificacoes:
    1 - A primeira linha deve ter um numero inteiro indicando a quantidade de alunos presentes na turma;
        1.1 -Este numero tem que ser maior do que 0;

*/

//Função para listar os alunos presentes no arquivo.
void listarAlunos(FILE *arq);
#endif
