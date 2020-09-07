//Este arquivo: interface.h
//Neste arquivo se encontram os prototipos das funções de interação direta com o usuário.
//Data: 04/09/2020
//////////////////////
#ifndef INTERFACE_H
#define INTERFACE_H

int menu();//Exibe um menu com as opçoes de utilização do App e recebe a função desejada pelo usuário.
void nomeFile(char *url); //Recebe do usuário a localização do arquivo que contem as informações necessarias para o App.
void statusArquivo(int op); //Exibe para o usuário se o arquivo indicado foi localizado.
void statusLayout(int op); //Exibe para o usuário se o arquivo indicado é valido.
void printAluno(char *name, int cont); //Lista os alunos presentes no arquivo.
void alerta(int op);//Alerta o usuário que falta os arquivos para proseguir com as funçoes do App.

#endif
