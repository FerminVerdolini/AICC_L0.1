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

// Tamaño de la serie solicitado en la consigna
#define N 12

void fibonacci(__uint32_t *V, __uint32_t num);

int main(void) 
{
    __uint32_t V[N];

    fibonacci(V,N);

    return 0;
}

/* Función que calcula la serie Fibonacci.
Parámetros: arreglo V, de tamaño num*/
void fibonacci(__uint32_t *V, __uint32_t num) {
    if (num < 1) {
        return;
    }

    V[0] = 0;
    if (num > 1) {
        V[1] = 1;
        for (int i = 2; i < num; i++) {
            V[i] = V[i - 1] + V[i - 2];
        }
    }
}
