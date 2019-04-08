#include <stdio.h>

int main (void)
{
	int num = 98;
	int *p_num;
	p_num = &num;

	printf ("El valor de la variable es %i\n",*p_num);
	printf ("La posicion de memoria es: %p", &num);
	
	
}
