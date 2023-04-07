#include <stdio.h>

int main () {
    char variable_caracter;
    int variable_entero;
    double variable_doble;

    printf("Ejercicio 3.4.a\n");

    printf("Por favor, ingrese un caracter:\n");
    scanf("%c",&variable_caracter);
    printf("Por favor, ingrese un número entero:\n");
    scanf("%i",&variable_entero);
    printf("Por favor, ingrese un número doble:\n");
    scanf("%lf",&variable_doble);

    printf("El valor del caracter ingresado es: %c\n", variable_caracter);
    printf("El valor del numero entero ingresado es: %i\n", variable_entero);
    printf("El valor del número doble ingresado es: %lf\n", variable_doble);

    printf("Fin del programa 3.4.a :)\n");
    return 0;
}