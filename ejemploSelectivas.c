#include <stdio.h>

void main(){
/*
    int a=10;
    int b=0;

    if(a > b){
        printf("Efectivamente, a es mayor que b \n");
        printf("saludos \n");
    }

    printf("El programa se va a cerrar \n");


    int a=10;
    int b=0;

    if(a == 0 )
        printf("a es un número igual a 0.\n");
    else
        printf("a puede ser cualquier número diferente a 0.\n");
*/

int a,b,c,d;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);

if(a>b){
    printf("efectivamente a es mayor que b\n");
    }
else if (a>c){
    printf("a es mayor que c\n");
    }
else if(a>d){
    printf("a es mayor que d\n");
    }
else{
    printf("a no es mayor que b, c, o d\n");
    }
}