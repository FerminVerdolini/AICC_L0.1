/* Implementar el algoritmo de ordenación burbuja (bubble sort) en C. 
 Este algoritmo ordena los elementos de un vector en
  orden ascendente mediante el siguiente procedimiento:

 Recorrer el vector repetidamente hasta terminar.
 Intercambiar cualquier par de componentes adyacentes si 

 V(i)>V(i+1).

 El algoritmo se detiene cuando cada par de componentes consecutivos está ordenado.
 Use arrays de 12 elementos para probar su programa. Guarde el programa como BubbleSort.c.*/

#include <stdio.h>
#include <unistd.h>

#define N 12

void bubble(__uint32_t * V);


int main(void) 
{
    __uint32_t V[N] = {5,8,7,23,12,6,1,19,11,28,3,20};

    bubble(V);

    return 0;
}

void bubble(__uint32_t * V){
    __uint32_t aux;
    __uint8_t sort;
    
    do{
        sort = 1;
        for(__uint32_t i = 0; i<(N-1) ; i++){
            if(V[i]>V[i+1]){
                aux = V[i+1];
                V[i+1] = V[i];
                V[i] = aux; 
                sort = 0;
            }
        }
    }while (sort == 0);
    
};

