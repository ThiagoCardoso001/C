#include <stdio.h> 
#include <stdlib.h>

int main ()
{ 
    float num, soma = 0, media = 0; 
    int i;

    for (i=1; i <=10; i ++)

    { 
    printf ("Insira o numero: \n");
    scanf ("%f", &num);
    soma += num;
    }

    media = soma/10;
    printf ("A media dos valores e: %3.f", media);

    return 0 ;
}


