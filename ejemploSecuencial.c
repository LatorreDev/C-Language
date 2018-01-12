#include <stdio.h>

#define k 9
#define m 2
float x;
float aux;
float f;

void main(){

    printf("Ingrese el valor para x: \n");
    scanf("%f", &x);

    //Cálculos

    aux = k*(x-m)*(x-m);
    f = aux/(1+aux);

    printf("El valor de f es: %f\n", f);


}