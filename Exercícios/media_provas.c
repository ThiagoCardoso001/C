#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

float media (float nota1, float nota2, float nota3){

printf ("\nO valor da média das 3 notas é: %.2f", nota1+nota2+nota3/3 );
}

int main ()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

float nota1, nota2, nota3;

printf ("\nInsira a 1° nota: ");
scanf ("%f", &nota1);
printf ("\nInsira a 2° nota: ");
scanf ("%f", &nota2);
printf ("\nInsira a 3° nota: ");
scanf ("%f", &nota3);

media (nota1, nota2, nota3);

return 0;
}

