#include <iostream>
#include <stdlib.h>  

class Ordenamiento{
    private:
        void merge(int *izquierda,int sizeIzquierda,int *derecha,int sizeDerecha,int *principal);
        void imprimirMerge(int*, int, std::string);
        void mergeSort(int*, int, std::string);
    public:
        int* crearLista(int);
        void mergeSort(int*, int);
        
        void imprimirLista(int*, int);

        
};