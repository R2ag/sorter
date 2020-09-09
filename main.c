#include "list.h"
#include "sorter.h"
#include "interface.h"
#include "file.h"
#include "tree.h"

int main(){
    //Configuração de linguagem
    setlocale(LC_ALL, "Portuguese");
    //Inicia a BST

    structureContainer fileContent;
    node *bufferNames;

    int bufferQtdAlunos;
    int bufferFlag;
    int countAlunos;

    int arquivoValido 0;

    int opcao;


    do{
        opcao = menu();
        if (arquivoValido == 0 && (opcao > 2 && opcao < 6)) {
            alerta(1);
            opcao = 0;
        }
        if (opcao < 1 || opcao > 6){
            alerta(2);
        }
        switch(opcao){
            case 1:
                createNode(bufferNames);
                startList(bufferNames);
                openFile(bufferNames, bufferQtdAlunos, bufferFlag, countAlunos);
                break;
            case 2:
                listarAlunos(bufferNames);
                break;
            case 3:
                fileContent.flag = bufferFlag;
                fileContent.qtdAlunosGrupos = bufferQtdAlunos;
                fileContent.qtdAlunos = countAlunos;
                groupSort(fileContent->colection, bufferNames);
                break;
            case 4:
                printGroup(fileContent);
                break;
            case 5:
                gerarRelatorio(fileContent);
                break;

            case 6:
                break;
        }
    }while(opcao != 5);
    return(0);
}
