#include "list.h"
#include "sorter.h"
#include "interface.h"
#include "file.h"

int main(){
    //Inicia a BST
    node *bufferNames;
    createNode(bufferNames);
    startList(bufferNames);
    int bufferQtdAlunos;
    int bufferFlag;
    int arquivoValido 0;

    int opcao;
    FILE *arq;
    do{
        opcao = menu();
        if (arquivoValido == 0 && (opcao > 2 && opcao < 5)) {
            alerta(1);
            opcao = 0;
        }
        if (opcao < 1 || opcao > 5){
            alerta(2);
        }
        switch(opcao){
            case 1:
                arq = openFile(bufferNames, bufferQtdAlunos, bufferFlag);
                break;
            case 2:
                listarAlunos(bufferNames);
                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                break;
        }
    }while(opcao != 5);
    return(0);
}
