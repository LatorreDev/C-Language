#include <stdio.h>

void main(){
    int numero;
    float numeroFloat;
    char c;

    printf("Ingresa una letra: \n");
    scanf("%c", &c);
    printf("Ingresa un número entero: \n");
    scanf("%d", &numero);
    printf("Ingresa un número real: \n");
    scanf("%f", &numeroFloat);
    printf("La letra ingresada es: %c\nel número entero ingresado es: %d\nel número real ingresado es: %f\n", c,numero,numeroFloat);
}