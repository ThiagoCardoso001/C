#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
   
float alg3 (float num1, float num2, float num3){

printf ("\nO valor dobrado do 1° número é: %.2f", num1*2);
printf ("\nO valor dobrado do 2° número é: %.2f", num2*2);
printf ("\nO valor dobrado do 3° número é: %.2f", num3*2);

}

int main ()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

float  num1, num2, num3;

printf ("\nDigite o 1° número: ");
scanf ("%f", &num1);
printf ("\nDigite o 2° número: ");
scanf ("%f", &num2);
printf ("\nDigite o 3° número: ");
scanf ("%f", &num3);

alg3 (num1, num2, num3);

return 0;
}













