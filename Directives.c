//Directivas del Preprocesador y Variables

//Header
#include<stdio.h>
//Constante(Macros)
#define PI 3.1416
//Variable global
int y = 5;

int main()
{
    //Variable local
    int x = 10;
    

    float suma = 0;

    suma = PI + x;

    printf("La suma es: %f", suma);

    return 0;
}

