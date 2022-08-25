#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

    int op;
    float result, n1=0.0, n2=0.0, n3=0.0, n4=0.0, n5=0.0, n6=0.0, n7=0.0, n8=0.0;

    printf ("\nEscolha um número para a operação que deseja realizar:");
    printf ("\n1 -> Soma \n2 -> Subtração \n3 -> Multiplicação \n4 -> Divisão \n-999 -> Sair\n");
    scanf ("%d", &op);
    printf ("\nVocê pode digitar até 8 números para soma e subtração, e 2 números para multiplicação e divisão.");

    if (op == -999)
    system (exit);

    printf ("\nDigite o 1° número: ");
    scanf ("%f", &n1);
    printf ("\nDigite o 2° número: ");
    scanf ("%f", &n2);
    printf ("\nDigite o 3° número: ");
    scanf ("%f", &n3);
    printf ("\nDigite o 4° número: ");
    scanf ("%f", &n4);
    printf ("\nDigite o 5° número: ");
    scanf ("%f", &n5);
    printf ("\nDigite o 6° número: ");
    scanf ("%f", &n6);
    printf ("\nDigite o 7° número: ");
    scanf ("%f", &n7);
    printf ("\nDigite o 8° número: ");
    scanf ("%f", &n8);

    switch (op)
    {

        case 1:
        result = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8;
        printf ("\nO resultado da soma é: %.2f\n", result);
        break;

        case 2:
        result = n1 - n2 - n3 - n4 - n5 - n6 - n7 - n8;
        printf ("\nO resultado da subtração é: %.2f\n", result);
        break;

        case 3:
        result = n1 * n2;
        printf ("\nO resultado da multiplicação é: %.2f\n", result);
        break;

        case 4:
        result = n1 / n2;
        printf ("\nO resultado da divisão é: %f\n", result);
        break;

        case -999:
        system ("exit");
        break;
    } 
    return 0;
    }



  

    
    
    

    



