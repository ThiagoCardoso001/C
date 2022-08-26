#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

    int num1  = 0 , num2 = 0, soma, i = 0;

    printf ("\nDigite o 1° número, ele deve possuir um valor menor ou igual que o do 2° número e também ser positivo: ");
    scanf ("%d", &num1);
    printf ("\nDigite o 2° número, ele deve ser positivo: ");
    scanf ("%d", &num2);
    
    for(i = 1;i <= num1; i++){ 
    printf ("%d +", num2);
    }
    printf ("= %d", num1 * num2);
    if (num1 <0 && num2<0) {
    printf ("\nValor inválido! Insira um valor positivo.");
    }
     
    return 0; 
}



