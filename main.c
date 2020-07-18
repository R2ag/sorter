#include "list.h"
#include "sorter.h"


int main(){
    //Inicia a Fila
    node *n;
    createNode(n);
    int opcao;
    char urlArquivo[MAX];
    nomeArquivo(urlArquivo);

    do{
        opcao = menu();
        switch(opcao){
            case 1:
                listarAlunos(urlArquivo);
                break;
            case 2:
                sortearGrupos(urlArquivo, q);
                break;
            case 3:
                break;
        }

    }while(opcao != 3);
    return(0);
}
