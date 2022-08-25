#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

    char nome [50];
    int idade, alimentado, resfriado;
    float peso;

    printf ("\ninforme o seu nome completo: ");
    fgets (nome,50,stdin);
    printf ("\nInforme a sua idade: ");
    scanf ("%d", &idade);
    printf ("\nInforme o seu peso: ");
    scanf ("%f", &peso);
    printf ("\nVocê está bem alimentado? 1 - SIM   2 - NÃO: ");
    scanf ("%d", &alimentado);
    printf ("\nVocê está resfriado? 1 - SIM  2 - NÃO: ");
    scanf ("%d", &resfriado);

    if (idade >= 16  && idade <=69 && peso >= 50 && alimentado ==1 && resfriado ==2){
        printf ("\nParabéns %s Você está apto a doar sangue.", nome);
    }
    else { 
        printf ("\n%s Você não está apto a doar sangue.", nome);

    }

return 0;
}