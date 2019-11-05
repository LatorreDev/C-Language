#include <stdio.h>
#include <string.h>

void main(){

char userName[25];
int decision = 1;
int loop = 1;
int estudiando = 1;

while (loop == 1){

    printf("Bienvenido a Platzi Terminal\n");
    printf("Ingresa tu nombre de usuario: \n");
    scanf("%s",userName);

    // printf("Bienvenido %s, vamos a acceder a tu sección\n", userName);

    if(strcmp(userName,"David")==0)
    {
        while(estudiando ==1){
        printf("Esto es Platzi Terminal Free Edition, ¿Qué deseas hacer?\n");
        printf("Ingrese 1 para estudiar\nIngrese 2 para leer el blog\nIngrese cualquier otro valor para salir\n");
        scanf("%d",&decision);
            if(decision == 1)
                printf("Estas en la sección de estudio, saca el máximo provecho\n");
            else if (decision == 2)
                printf("Estas en el blog aprovechalo\n");
            else
                printf("Goodbye :)\n");
            estudiando = 2;
        }

    }
    else if(strcmp(userName,"Camilo")==0){
        printf("Esto es Platzi Terminal Standard Edition, ¿Qué deseas hacer?\n");
        printf("Ingrese 1 para estudiar\nIngrese 2 para leer el blog\nIngrese cualquier otro valor para salir\n");
        scanf("%d",&decision);
            if(decision == 1)
                printf("Estas en la sección de estudio, saca el máximo provecho\n");
            else if (decision == 2)
                printf("Estas en el blog aprovechalo\n");
            else
                printf("Goodbye :)\n");
    }
    else if(strcmp(userName,"Angela")==0){
        printf("Esto es Platzi Terminal Premium Edition, ¿Qué deseas hacer?\n");
        printf("Ingrese 1 para estudiar\nIngrese 2 para leer el blog\nIngrese 3 para mentoria\nIngrese cualquier otro valor para salir\n");
        scanf("%d",&decision);
            if(decision == 1)
                printf("Estas en la sección de estudio, saca el máximo provecho\n");
            else if (decision == 2)
                printf("Estas en el blog aprovechalo\n");
            else if (decision == 3)
                printf("Estas en la sección de solicitud de mentoría\n")                ;
            else
                printf("Goodbye :)\n");
    }
    else{
        printf("No eres un usuario registrado :(, te invitamos a que te registres, tenemos galletitas :)\n");
        printf("Intenta de nuevo por favor\n");
    }
    }
}
