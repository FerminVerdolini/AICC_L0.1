/*
    Dado un vector de N elementos (es decir, un array), A, genere otro vector B
    de manera que B sólo contenga aquellos elementos de A que son números pares mayores que 0.
    El programa en C también debe contar el número de elementos de B e imprimir ese valor al 
    final del programa. Por ejemplo: supongamos que N = 12 y A= [0,1,2,7,-8,4,5,12,11,-2,6,3], 
    entonces B seria: B=[2,4,12,6]. Dado que B tiene cuatro elementos, al final del programa 
    se debe imprimir lo siguiente: "numero de elementos de B: 4"
*/

#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned int *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned int *)dir) = (value); }

int main(void)
{
    int A[12] = {0,1,2,7,-8,4,5,12,11,-2,6,3};
    int B[12];
    int i, j = 0;

    for (i = 0; i < 12; i++)
    {
        if (A[i] > 0 && A[i] % 2 == 0)
        {
            B[j] = A[i];
            j++;
        }
    }

    printfNexys("numero de elementos de B: %d\n", j);

    return 0;
}