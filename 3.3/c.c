#include <stdio.h>

int main()
{
    float unFloat = 3.4E+38;
    double unDouble = 1.7E+308;
    int unEntero = 2147483647;
    short unShort = 32767;
    //short unShort = 40000;
    char unCaracter = 'Z';
    long unLong = 2147483647;

    printf("EJERCICIO 3.3.c\n");

    
    printf("\t La variable unFloat es de tipo FLOAT, tiene un tamaño de: %d y fue inicializada con el valor: %E \n", sizeof(unFloat),unFloat);
    printf("\t La variable unDouble es de tipo DOUBLE, tiene un tamaño de: %d y fue inicializada con el valor: %E \n",sizeof(unDouble), unDouble);
    printf("\t La variable unEntero es de tipo INT, tiene un tamaño de: %d y fue inicializada con el valor: %i \n",sizeof(unEntero), unEntero);
    printf("\t La variable unShort es de tipo SHORT, tiene un tamaño de: %d y fue inicializada con el valor: %d \n",sizeof(unShort), unShort);
    printf("\t La variable unCaracter es de tipo CHAR, tiene un tamaño de: %d y fue inicializada con el valor: %c \n",sizeof(unCaracter), unCaracter);
    printf("\t La variable unLong es de tipo LONG, tiene un tamaño de: %d y fue inicializada con el valor: %ld \n",sizeof(unLong), unLong);
    
    printf("Fin del programa 3.3.c :)\n");

    return 0;
}