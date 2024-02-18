/*
    Escribir un programa en C que muestre el resultado de la suma (4 bits sin signo) de los 4 
    bits menos significativos de los interruptores con los 4 bits más significativos de los 
    mismos. El resultado se debe mostrar en los 4 bits menos significativos (mas a la derecha) 
    de los leds. El quinto de los LEDs debe encenderse cuando se produzca un desborde sin signo
*/

// memory-mapped I/O addresses
#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408    


#define READ_GPIO(dir) (*(volatile unsigned int *)(dir))
#define WRITE_GPIO(dir, value) { (*(volatile unsigned int *)(dir)) = (value); }

int main (void)
{
    int En_Value = 0xFFFF;
    int value1, value2, result, carry;
    
    WRITE_GPIO(GPIO_INOUT, En_Value);

    while(1)
    {
        value1 = READ_GPIO(GPIO_SWs) & 0x0000000F;
        value2 = (READ_GPIO(GPIO_SWs) & 0x000000F0) >> 4;
        result = value1 + value2;
        WRITE_GPIO(GPIO_LEDs, result);

        if(result > 15){
            WRITE_GPIO(GPIO_LEDs, (READ_GPIO(GPIO_LEDs) | 0x00010000));
        }

        unsleep(1000000);  // 1 segundo para mostrar el resultado
    }

    return 0;
}
