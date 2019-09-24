#include "../include/shuf.h"
#include "../include/menu.h"

// essa função tem como objetivo embaralhar o array de acordo com o que é escolhido no "menu"
void menu(int *Array, int *ArrayIndex,int tamanhoVetor, int selecaoVetor){
    int meioVetor = tamanhoVetor/2;
    int umQuartoVetor = tamanhoVetor/4;
    int range = 0;
    
    //vetor inverso
    if(selecaoVetor == 6){
        int first, last;
        first = 0;
        last = tamanhoVetor;
        while (first < last){
            std::swap(Array[first],Array[last - 1]);
            first ++;
            last --;   
        }
    }

    if (selecaoVetor == 2 || selecaoVetor == 3 || selecaoVetor == 4 || selecaoVetor == 5 ){

        std::random_shuffle(&ArrayIndex[0], &ArrayIndex[tamanhoVetor]);
        int elemento1 = 0;
        int elemento2 = 1;

            // vetor 50% ordenado
        if (selecaoVetor == 2){
            range = meioVetor -1;
            shuf(Array, ArrayIndex, range, elemento1, elemento2);
        }
            //vetor 25% ordenado
        if (selecaoVetor == 3){
            range = umQuartoVetor + meioVetor -1;
            shuf(Array, ArrayIndex, range, elemento1, elemento2);
        }
            //vetor 75% ordenado
        if (selecaoVetor == 4){
            range = umQuartoVetor ;
            shuf(Array, ArrayIndex, range, elemento1, elemento2);
        }
            //vetor todo aleatório
        if (selecaoVetor == 5){
            std::random_shuffle(&Array[0], &Array[tamanhoVetor]);          
          }
    }
}
//essa função copia a array embaralhado para uma auxiliar para que possa ser recuperada posteriormente.
void copiar(int *Array, int *copia, int tamanhoVetor){
    for (int i = 0; i < tamanhoVetor; i++){
       copia[i] = Array[i];
    }
     return;
}
/*esse função atribui os valores da array copia para a array principal, com os valores que a principal
possuia antes de ser ordenada*/
void copiarReverso(int *Array, int *copia, int tamanhoVetor){
    for (int i = 0; i < tamanhoVetor; i++){
       Array[i] = copia[i];
    }
    return;
}
/*função feita apenas para testes de implementação. Printa a array por completo.*/
void printArray(int *Array, int tamanhoVetor){
    int i;
    for (i = 0; i < tamanhoVetor; i++){
        std::cout << Array[i];
        std::cout << " ";
    }
}