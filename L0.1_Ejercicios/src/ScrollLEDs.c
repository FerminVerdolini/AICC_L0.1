/*
    Escriba un progama en C que desplace un número creciente de LEDs encendidos 
    hacia adelante y hacia atras hasta que todos los LEDs estén encendidos.
    Entonces el patrón debe repetirse
*/

// memory-mapped I/O addresses
#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned int *)(dir))
#define WRITE_GPIO(dir, value) { (*(volatile unsigned int *)(dir)) = (value); }



int main (void)
{
    int En_value = 0xFFFF;
    int contador = 0x1;
    int switches_value = contador;     // DEFINIR COMO uint16_t PARA SOLO MODIFICAR LOS LEDS 

    WRITE_GPIO(GPIO_INOUT, En_value);

    while(1)
    {
        //Recorre los LEDs de derecha a izquierda
        for(int i=0; i<16; i++){
            WRITE_GPIO(GPIO_LEDs, switches_value);
            usleep(100000); // Espera 100ms
            switches_value <<= 1;
        }

        //Recorre los LEDs de izquierda a derecha
        for(int i=0; i<16; i++){
            WRITE_GPIO(GPIO_LEDs, switches_value);
            usleep(100000); // Espera 100ms
            switches_value >>= 1;
        }

        //Compureba que todos los LEDs esten encendidos sino enciende el siguiente
        if(switches_value == 0xFFFF){
            contador = 0x1;
        } else {
            contador = contador | (contador << 1);          // Ej: 0b0011 | 0b0110 = 0b0111
        }

        switches_value = contador;        
    }
    
    return 0;
}



