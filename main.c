#include "list.h"
#include "sorter.h"
#include "interface.h"
#include "file.h"

int main(){
    //Inicia a BST
    node *n;
    createNode(n);
    int opcao;
    int arquivoValido = 0; //Flag para definir se o arquivo com os alunos está carregado e é valido para a execução
    FILE *arq;
    do{
        opcao = menu(arquivoValido);
        if (arquivoValido == 0 && (opcao != 1 && opcao != 5)) {
            alerta();
            opcao = 0;
        }
        switch(opcao){
            case 1:
                arq = openFile();
                break;
            case 2:
                listarAlunos(arq);
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
