#include "../include/shuf.h"

//essa função embaralha os elementos da array principal com base na array de indices até a quantidade determinada pelo cliente.
void shuf(int *Array,int *ArrayIndex, int range, int elemento1, int elemento2){  
    while (elemento1 <= range && elemento2 <= range + 1){
        std::swap(Array[ArrayIndex[elemento1]],Array[ArrayIndex[elemento2]]);
        elemento1 += 2;
        elemento2 += 2;     }
    std::cout << "\n";
}