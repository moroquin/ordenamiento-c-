#include "Ordenamiento.hpp"


int* Ordenamiento::crearLista(int size){
    int *lista = new int[size];
    for (int i = 0; i < size; i++)
        lista[i] = rand() % 100 + 1;
    
    return lista;


}

void Ordenamiento::mergeSort(int *lista, int size){
    std::string espacio = " ";
    mergeSort(lista,size,espacio);
}


void Ordenamiento::mergeSort(int *lista, int size, std::string espacio){
    if(size==1)
        return;

    int mitad = size / 2;
    int *izquierda = new int[mitad];
    int *derecha = new int[size-mitad];

    for(int i=0;i<mitad;i++)
        izquierda[i] = lista[i];
    

    for(int i=mitad;i<size;i++)
        derecha[i-mitad] = lista[i];
    
    espacio =  espacio+"     ";
    imprimirMerge(izquierda,mitad,espacio);
    mergeSort(izquierda, mitad, espacio);
    imprimirMerge(derecha, size-mitad,espacio);
    mergeSort(derecha, size-mitad,espacio);
        

    merge(izquierda, mitad, derecha, size-mitad, lista);
    std::cout<< "Merge->\n";
    imprimirMerge(lista, size,espacio);
}

void Ordenamiento::merge(int *izquierda,int sizeIzquierda,int *derecha,int sizeDerecha,int *principal)
{
    int i=0;
    int j=0;
    int k=0;

    while( ( i < sizeIzquierda ) && ( j < sizeDerecha ) ){
        if( izquierda[i] <= derecha[j]){
            principal[k] = izquierda[i];
            i++;
        }
        else{
            principal[k] = derecha[j];
            j++;
        }
        k++;
    }

    while(i < sizeIzquierda){
        principal[k] = izquierda[i];
        i++;
        k++;
    }

    while(j < sizeDerecha){
        principal[k] = derecha[j];
        j++;
        k++;
    }
}


void Ordenamiento::imprimirLista(int *lista, int size){
   for (int i = 0; i < size; i++)
        std::cout<<lista[i]<<" ";

    std::cout<<"\n" ;
        
}

void Ordenamiento::imprimirMerge(int *lista, int size, std::string espacio){
    std::cout<< espacio;
    for (int i = 0; i < size; i++)
        std::cout<< lista[i]<<" ";

    std::cout<<"\n";
        
}