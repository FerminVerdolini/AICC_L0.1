## AICC_L0.1

# RVfpga Programación en C

### 4. Ejercicios

A continuación tendrá la oportunidad de crear sus propios programas en C completando los siguientes ejercicios. Tenga en cuenta que si deja la placa Nexys A7 conectada a su computadora y encendida, no necesita volver a cargar RVfpgaNexys en la placa entre la ejecución de diferentes programas. Sin embargo, si apaga la placa Nexys A7, es necesario recargar RVfpgaNexys en la placa usando PlatformIO, como se describe en el paso 3 de la Sección 2.
Recuerde que puede imprimir cualquier variable usando la función BSP de Western Digital `printfNexys` (ver sección 3).
Recuerde también que puede ejecutar todos estos programas en simulación, tanto en
Verilator como en Whisper.


**Ejercicio 1**. Escriba un programa en C que proyecte el valor de los interruptores en los
LEDs. Ese valor se mantiene durante un tiempo tras el cual los LEDs se apagan, y se repite el proceso. El valor debe encenderse y apagarse lo suficientemente lento como para que una persona pueda ver el parpadeo. Guarde el programa como **`FlashSwitchesToLEDs.c.`**


**Ejercicio 2.** Escriba un programa en C que muestre el valor inverso de los interruptores en los LEDs. Por ejemplo, si los interruptores son (en binario): 01010101010101, entonces los LEDs deberían mostrar: 101010101010101010; si los interruptores son: 1111000011110000, entonces en los LEDs debería aparecer: 0000111100001111; y así
sucesivamente. Use **`DisplayInverse.c`** como nombre para el programa.



**Ejercicio 3 (<mark>OPCIONAL</mark>).** Escriba un programa en C que desplace un número creciente de LEDs encendidos hacia adelante y hacia atrás hasta que todos los LEDs estén encendidos. Entonces el patrón debe repetirse. Guarde el programa como **`ScrollLEDs.c.`**
El programa debería realizar lo siguiente:

1. Primero, un LED encendido debe desplazarse de derecha a izquierda y luego de
   izquierda a derecha.
2. A continuación dos LEDs encendidos deben desplazarse de derecha a izquierda y luego de izquierda a derecha.
3. Después tres LEDs encendidos deben desplazarse de derecha a izquierda y luego de izquierda a derecha.
4. Y así sucesivamente, hasta que todos los LEDs se encienden.
5. A continuación el patrón debe repetirse



**Ejercicio 4.** Escriba un programa en C que muestre el resultado de la suma (4 bits sin
signo) de los 4 bits menos significativos de los interruptores con los 4 bits más significativos de los mismos. El resultado se debe mostrar en los 4 bits menos significativos (más a la derecha) de los LEDs. Guarde el programa como **`4bitAdd.c`** El quinto bit de los LEDs debería encenderse cuando se produzca un desborde sin signo (es decir, cuando el acarreo de salida es 1).



**<mark>(LOS SIGUIENTES EJERCICIOS DEL 5 AL 10 NO HAY QUE HACERLOS PARA AICC:PUEDE HACER ALGUNO DE FORMA OPCIONAL SI LE INTERESA)</mark>**



**Ejerciocio 5.** Escriba un programa en C que encuentre el máximo común divisor de dos números, a y b, según el algoritmo de Euclides. Los valores a y b deben ser variables
definidas estáticamente en el programa. Guarde el programa como **`GCD.c`**. [En el siguiente enlace se proporciona información adicional sobre el algoritmo de Euclides](https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm)



**Ejercicio 6**. Escriba un programa en C que calcule los primeros 12 números de la serie de Fibonacci y almacene el resultado en un vector finito (es decir, un array), V, de longitud 12. La secuencia infinita de números de Fibonacci se define del siguiente modo:

$$
V(0)=0, V(1)=1, V(i)=V(i-1)+V(i-2) (i=0,1,2... )
$$

Expresado en palabras, el número de Fibonacci correspondiente al elemento i es la suma de los dos números previos de la serie. 

La dimensión del vector, N, debe ser definida en el programa como una constante. Guarde el programa como **`Fibonacci.c`**.



**Ejercicio 7.** Dado un vector de N elementos (es decir, un array), A, genere otro vector, B, de manera que B sólo contenga aquellos elementos de A que son números pares mayores que 0. El programa en C también debe contar el número de elementos de B e imprimir ese valor al final del programa. Por ejemplo: supongamos que $N=12$ y $A = [0,1,2,7,-8,4,5,12,11,- 2,6,3]$, entonces $B$ sería: $B = [2,4,12,6]$. Dado que $B$ tiene cuatro elementos, al final del programa se debe imprimir lo siguiente

```
Número de elementos de B = 4.
```

Utilice la función `printfNexys` para ello. Guarde el programa como
**`EvenPositiveNumbers.c.`** Pruebe su programa para un vector A de 12 elementos.



**Ejercicio 8.** Dados dos vectores de N elementos (es decir, arrays), A y B, crear otro vector, C, definido como:

$$
C(i) = |A[i] + B[N-i-1]|, i = 0,..,N-1.
$$

Escriba un programa en C que calcule el nuevo vector. Utilice arrays de 12 elementos en su programa. Guarde el programa como **`AddVectors.c.`**



**Ejercicio 9.** Implementar el algoritmo de ordenación burbuja (bubble sort) en C. Este
algoritmo ordena los elementos de un vector en orden ascendente mediante el siguiente procedimiento:

1. Recorrer el vector repetidamente hasta terminar.
2. Intercambiar cualquier par de componentes adyacentes si $V(i) > V(i+1)$.
3. El algoritmo se detiene cuando cada par de componentes consecutivos está
   ordenado.

Use arrays de 12 elementos para probar su programa. Guarde el programa como
**`BubbleSort.c.`**



**Ejercicio 10.** Escriba un programa en C que calcule el factorial de un número no negativo, n, mediante multiplicaciones iterativas. Aunque debe probar el correcto funcionamiento de su programa para múltiples valores de n, la entrega final del mismo debe ser para $n = 7$. El programa debe imprimir el valor del factorial(n) al final del programa. n debe ser una variable definida estáticamente dentro del programa. Guarde el programa como **`Factorial.c`**
