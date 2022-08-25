#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    int (num); // número equivalente ao planeta
    float peso;
    printf ("\n Digite o seu peso:\n");
    scanf ("%f", &peso);
    printf ("\n Digite um numero equivalente a um planeta: \n");
    printf ("\n1 = Mercúrio \n");
    printf ("2 = Venus \n");
    printf ("3 = Marte \n");
    printf ("4 = Jupiter \n");
    printf ("5 = Saturno \n");
    printf ("6 = Urano \n");
    printf ("7 = Netuno \n\n");
    scanf ("%i", &num);

    switch (num) 
    {
        case 1: 
        printf ("\nO seu peso em Mercurio e: %.3f\n", peso * 0.376);
        break;

        case 2: 
        printf ("\nO seu peso em Venus e: %.3f\n", peso * 0.903);
        break;

        case 3: 
        printf ("\nO seu peso em Marte e: %.3f\n", peso * 0.380);
        break;

        case 4:
        printf ("\nO seu peso em Jupiter e: %.3f\n", peso * 2.340 );
        break;

        case 5:
        printf ("\nO seu peso em Saturno e: %.3f\n", peso * 1.160) ;
        break;

        case 6:
        printf ("\nO seu peso em Urano e: %.3f\n", peso * 1.150);
        break;

        case 7:
        printf ("\nO seu peso em Netuno e: %.3f\n", peso * 1.190);
        break;

        default:
        printf ("\nEsse valor nao e valido!\n");
    } 
        return 0; 

}

    

   

    
   

    
