//Esta es una tienda que vende productos de platzi

#include <stdio.h>
#include <string.h>

char opcion[8];
int gorras;
int totalGorras = 0;
int seguirComprando = 1; 

void main()
{

    while(seguirComprando == 1)
    {

        printf("Elije el producto que buscas\n");
        printf("Ingrese gorra para comprar una\n");
        printf("Ingrese termo para comprar uno\n");
        printf("Ingrese camiseta para comprar una\n");
        printf("Ingrese mug para comprar uno\n");

        scanf("%s", opcion);

    if(strcmp(opcion, "gorra") == 0)
    {
        printf("El coste de cada gorra es de 5 usd, ¿cuantas quieres?\n");
        scanf("%d", &gorras);
        totalGorras=totalGorras + (gorras*5);
        printf("Su total de gorras es: %d \n",totalGorras);

    }

    else if(strcmp(opcion, "termo") == 0)
    {

    }

    else if(strcmp(opcion, "camiseta") == 0)
    {

    }
    else if(strcmp(opcion, "mug") == 0)
    {

    }
    else
        printf("El producto especificado no existe :(, prueba otra opción \n");
        printf("En caso de querer otro producto presione 1, para salir presione cualquier otro número\n");
        scanf("%d",&seguirComprando);
        printf("Gracias por comprar :)\n");
}
}