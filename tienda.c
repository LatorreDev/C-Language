#include <stdio.h>

void main(){
	int opcion;
	int cantidad;
	int precio = 0;
	int total = 0;

	printf("\n\n ----------------------\n");
	printf(" MENU de TIENDA\n");
	printf(" ----------------------\n");
	printf(" Productos\n");
	printf(" ----------------------\n");
	printf("  1. Lata de Atun ($25)\n");
	printf("  2. Pan ($11)\n");
	printf("  3. Gaseosa ($7)\n");
	printf("  4. Arroz ($15)\n");
	printf("  5. Queso ($20)\n");
	printf(" ----------------------\n");
	printf(" Indique codigo del producto quiere comprar: ");
	scanf("%d", &opcion);

	if(opcion >= 1 && opcion <= 5 ){
		printf(" Indique la cantidad: ");
		scanf("%d", &cantidad);
		printf(" ----------------------\n");
		printf(" Ud ha comprado %d de ", cantidad);
	}

	switch(opcion){
		case1:
			printf("Atun");
			precio = 25;
		break;
		case2:
			printf("Pan");
			precio = 11;
		break;
		case3:
			printf("Gaseosa");
			precio = 7;
		break;
		case4:
			printf("Arroz");
			precio = 15;
		break;
		case5:
			printf("Queso");
			precio = 20;
		break;
		default:
			printf(" ----------------------\n");
			printf(" Ud. No escogio ningun producto. Adios.\n\n");
			opcion = -1;
		break;
	}
	if(opcion != -1){
		total = cantidad * precio ;
		printf(" y su total fue de $%d \n\n", total);
		printf(" Gracias por su compra.\n\n");	
	}
}