#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

    int cod;

    printf ("Escolha o seu destino de viagem conforme a tabela abaixo:\n");
    printf ("\n 1 = Região Norte");
    printf ("\n 2 = Região Nordeste");
    printf ("\n 3 = Região Centro-Oeste");
    printf ("\n 4 = Região Sul\n");
    scanf ("%i", &cod);

    if (cod != 1 && cod != 2 && cod != 3 && cod != 4){
        printf ("Você tem algum problema?\n");
        return main();
        }

    switch (cod)
    {
        case 1: 
        printf("\nO valor da sua passagem é: ");
        printf("\nIda: R$ 500,00");
        printf ("\nIda e volta: R$ 900,00");
        break;

        case 2:
        printf("\nO valor da sua passagem é: ");
        printf("\nIda: R$ 350,00");
        printf ("\nIda e volta: R$ 650,00");
        break;

        case 3:
        printf("\nO valor da sua passagem é: ");
        printf("\nIda: R$ 350,00");
        printf ("\nIda e volta: R$ 600,00");
        break;

        case 4:
        printf("\nO valor da sua passagem é: ");
        printf("\nIda: R$ 300,00");
        printf ("\nIda e volta: R$ 550,00");
        break;
    }
        
        return 0;
}

