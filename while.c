#include <stdio.h>

void main(){
    int decision = 1;
    int inc = 0;

   do
    {
        inc++;
        printf("Ejecución número %d\n", inc);
        printf("Si desea continuar presione 1 o cualquier otro para salir\n");
        scanf("%d", &decision);
    }
    while(decision==1);
    
    printf("Gracias, adios\n");

}