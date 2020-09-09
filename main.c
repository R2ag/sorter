#include "list.h"
#include "sorter.h"
#include "interface.h"
#include "file.h"

int main(){
    //Configuração de linguagem
    setlocale(LC_ALL, "Portuguese");
    //Inicia a BST

    structureContainer fileContent;
    node *bufferNames;


    int bufferQtdAlunos;
    int bufferFlag;

    int arquivoValido 0;

    int opcao;


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
                createNode(bufferNames);
                startList(bufferNames);
                openFile(bufferNames, bufferQtdAlunos, bufferFlag);
                break;
            case 2:
                listarAlunos(bufferNames);
                break;
            case 3:
                fileContent.flag = bufferFlag;
                fileContent.qtdAlunos = bufferQtdAlunos;
                groupSort(structureContainer->colection, bufferNames);
                break;
            case 4:

                break;
            case 5:
                break;
        }
    }while(opcao != 5);
    return(0);
}
