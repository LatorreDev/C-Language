//Data types

//Header
#include<stdio.h>

int main()
{
    char a = 'e'; //size = 1byte Range: 0..255
    short b = -15; //size = 2 bytes Range: -128... 127
    int c = 1024; //size = 2 bytes Range: -32768... 32767
    unsigned int  d = 128; //size = 2 bytes Range: 0... 65535 only positive value
    long e = 123456; //size = 4 bytes Range: -128... 127
    float f = 15.678; //size = 4 bytes Range: -128... 127
    double m = 123123.123123; //size = 8 bytes Range: -128... 127

    printf("El valor de a es: %c \n", a );

    printf("El valor de b es: %i \n", b);

    printf("El valor de c es: %i \n", c);

    printf("El valor de d es: %i \n", d);

    printf("El valor de e es: %li \n", e);

    printf("El valor de f es: %f \n", f);

    printf("El valor de m es: %lf \n", m); //lf mean long float


    return 0;
    
}
