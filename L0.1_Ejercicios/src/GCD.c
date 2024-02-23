/*Escriba un programa en C que encuentre el máximo común 
 divisor de dos números, a y b, según el algoritmo de Euclides. 
 Los valores a y b deben ser variables definidas estáticamente en el programa. 
 Guarde el programa como GCD.c*/

#include <stdio.h>
#include <unistd.h>

__uint32_t gcd(__uint32_t a, __uint32_t b);

int main(void) 
{
    __uint32_t num1 = 8;
    __uint32_t num2 = 18;
    __uint32_t numgdc;

    numgdc = gcd(num1,num2);

    return 0;
}

/* Función que devuelve el máximo común divisor entre dos números */
__uint32_t gcd(__uint32_t a, __uint32_t b){
    if (b == 0){
        return a;
    }else{
        gcd(b,a%b);
    }
};
