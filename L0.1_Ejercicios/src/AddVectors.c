/*
    Dados dos vectores de N elementos (es decir, arrays) A y B, 
    crear otro vector, C definido como:
        C(i) = A[i] + B[i] para todo i = 0, 1, 2, ..., N-1. 
    Escriba un programa en C que calcule el nuevo vector. 
    Utilice arrays de 12 elementos en su programa.
*/



#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned int *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned int *)dir) = (value); }

int main(void)
{
    int A[12] = {0,1,2,7,-8,4,5,12,11,-2,6,3};
    int B[12] = {9,8,7,6,5,4,3,2,1,0,-1,-2};
    int C[12];

    for(int i=0; i<12; i++)
    {
        C[i] = A[i] + B[i];
    }

    for(int i=0; i<12; i++)
    {
       printfNexys("C[%d] = %d", i, C[i]);
    }
    

    return 0;
}