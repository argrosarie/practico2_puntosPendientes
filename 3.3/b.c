#include <stdio.h>

int main()
{
    float soyFloat = -123000.567;
    double soyDouble = -123000.567;

    // EJEMPLO FLOAT
    printf("Ejercicio de variable float con valor negativo:\n");
    printf("\t Este es el formato original: %f.\n", soyFloat);
    printf("\t Aqui se muestra con dos 2 decimales: %.2f.\n", soyFloat);
    printf("\t Aqui se muestra solo la parte entera: %d.\n", (int)soyFloat);

    // EJEMPLO DOUBLE
    printf("Ejercicio de variable double con valor negativo:\n");
    printf("\t Este es el formato original: %lf.\n", soyDouble);
    printf("\t Aqui se muestra con dos 2 decimales: %.2lf.\n", soyDouble);
    printf("\t Aqui se muestra solo la parte entera: %d.\n", (int)soyDouble);

    return 0;
}