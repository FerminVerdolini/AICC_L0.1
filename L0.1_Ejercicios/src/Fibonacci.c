/*Ejercicio 6. Escriba un programa en C que calcule los primeros 12 
 números de la serie de Fibonacci y almacene el resultado en 
 un vector finito (es decir, un array), V, de longitud 12.
 La secuencia infinita de números de Fibonacci se define del siguiente modo:
 
 V(0)=0,V(1)=1,V(i)=V(i−1)+V(i−2)(i=0,1,2...)
 
 Expresado en palabras, el número de Fibonacci correspondiente al 
 elemento i es la suma de los dos números previos de la serie.
 
 La dimensión del vector, N, debe ser definida en el programa como una constante. 
 Guarde el programa como Fibonacci.c*/

#include <stdio.h>
#include <unistd.h>

#define N 12

void fibonacci(__uint32_t *V, __uint8_t *j);

int main(void) 
{
    __uint8_t i =0;
    __uint32_t V[N];

    fibonacci(V,&i);

    return 0;
}

void fibonacci(__uint32_t *V, __uint8_t *j){
    V[*j]=0;
    for(__uint32_t i = 0; i<j;i++){
        V[*j] += V[i];
    }
    j++;
    if (j>N){
        fibonacci(V,&j);
    }
}
