/*Escriba un programa en C que calcule el factorial de un número no negativo, n, 
mediante multiplicaciones iterativas. Aunque debe probar el correcto funcionamiento 
de su programa para múltiples valores de n, la entrega final del mismo debe ser para n = 7. 
El programa debe imprimir el valor del factorial(n) al final del programa. n debe ser una 
variable definida estáticamente dentro del programa. Guarde el programa como Factorial.c*/

#include <stdio.h>

/* Valor indicado en consigna*/
#define N 7

__uint32_t factorial(__uint32_t num);

int main(void) 
{
    __uint32_t resultado = factorial(N);
    printfNexys("Resultado: %d\n", resultado);
    return 0;
}

/*Función que ejecuta la operación factorial al llamarse recursivamente*/
__uint32_t factorial(__uint32_t num){
    if (num == 0 || num == 1) return 1;
    else if (num > 1) return num*(factorial(num-1));
    else return 0;
}
