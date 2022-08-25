#include <stdio.h> 
#include <stdlib.h>

int main ()
{ 
    int num, n, soma; 
    int i;
    float media=0;

    printf ("Insira aqui quantidade de numeros presentes na media: \n");
     scanf ("%i", &n);

    for (i=1; i <=n; i ++)
    { 
        printf ("\n insira aqui o %i valor: \n", i);
        scanf ("%i", &num);
        
    }

    media = num* (i-1)/n;

    printf ("A media dos valores e: %1.f\n", media);

    system ("pause");
    return 0 ;
}
