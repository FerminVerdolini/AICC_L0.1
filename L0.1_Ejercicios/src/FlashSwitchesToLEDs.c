/*

    Escriba un programa en C que proyecte el valor de los interruptores en los LEDs. 
    Ese valor se mantiene durante un tiempo tras el cual los LEDs se apagan, y se repite el proceso. 
    El valor debe encenderse y apagarse lo suficientemente lento como para que una persona pueda ver el parpadeo. 
    Guarde el programa como FlashSwitchesToLEDs.c.

*/ 

#include <stdio.h>
#include <unistd.h>

#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned int *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned int *)dir) = (value); }

int main(void) 
{
    int En_value = 0xFFFF;
    int switches_value;

    WRITE_GPIO(GPIO_INOUT, En_value);

    while (1) 
    {
        switches_value = READ_GPIO(GPIO_SWs);
        switches_value = switches_value >> 16;

        WRITE_GPIO(GPIO_LEDs, switches_value);
        usleep(500000); // Espera 500ms
        
        WRITE_GPIO(GPIO_LEDs, 0);
        usleep(500000); // Espera 500ms
    }

    return 0;
}