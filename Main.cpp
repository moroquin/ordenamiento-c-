#include <iostream>
#include <stdlib.h>
#include "Ordenamiento.hpp"

using namespace std;

int main(){

  
    Ordenamiento ord = Ordenamiento();

    int size1 = 15;
    int *lista1 = ord.crearLista(size1);
    
    ord.imprimirLista(lista1, size1);
    ord.mergeSort(lista1, size1);
    ord.imprimirLista(lista1, size1);

    return 0;

}