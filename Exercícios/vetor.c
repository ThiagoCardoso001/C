#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

int vetor[15];

printf ("\nEscolha 15 números para este vetor.\n");

printf ("\nDigite o 1° número: ");
scanf ("%d", &vetor[1]);
printf ("\nDigite o 2° número: ");
scanf ("%d", &vetor[2]);
printf ("\nDigite o 3° número: ");
scanf ("%d", &vetor[3]);
printf ("\nDigite o 4° número: ");
scanf ("%d", &vetor[4]);
printf ("\nDigite o 5° número: ");
scanf ("%d", &vetor[5]);
printf ("\nDigite o 6° número: ");
scanf ("%d", &vetor[6]);
printf ("\nDigite o 7° número: ");
scanf ("%d", &vetor[7]);
printf ("\nDigite o 8° número: ");
scanf ("%d", &vetor[8]);
printf ("\nDigite o 9° número: ");
scanf ("%d", &vetor[9]);
printf ("\nDigite o 10º número: ");
scanf ("%d", &vetor[10]);
printf ("\nDigite o 11° número: ");
scanf ("%d", &vetor[11]);
printf ("\nDigite o 12° número: ");
scanf ("%d", &vetor[12]);
printf ("\nDigite o 13° número: ");
scanf ("%d", &vetor[13]);
printf ("\nDigite o 14° número: ");
scanf ("%d", &vetor[14]);
printf ("\nDigite o 15° número: ");
scanf ("%d", &vetor[15]);

printf ("\nO número do 1° vetor é: %d", vetor[1]);
printf ("\nO número do 2° vetor é: %d", vetor[2]);
printf ("\nO número do 3° vetor é: %d", vetor[3]);
printf ("\nO número do 4° vetor é: %d", vetor[4]);
printf ("\nO número do 5° vetor é: %d", vetor[5]);
printf ("\nO número do 6° vetor é: %d", vetor[6]);
printf ("\nO número do 7° vetor é: %d", vetor[7]);
printf ("\nO número do 8° vetor é: %d", vetor[8]);
printf ("\nO número do 9° vetor é: %d", vetor[9]);
printf ("\nO número do 10° vetor é: %d", vetor[10]);
printf ("\nO número do 11° vetor é: %d", vetor[11]);
printf ("\nO número do 12° vetor é: %d", vetor[12]);
printf ("\nO número do 13° vetor é: %d", vetor[13]);
printf ("\nO número do 14° vetor é: %d", vetor[14]);
printf ("\nO número do 15° vetor é: %d", vetor[15]);

return 0;

}

