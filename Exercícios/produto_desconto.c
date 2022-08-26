#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

float novo_valor (float produto, float desconto, float calculo){

calculo = produto - (produto * desconto/100);
printf ("\nO valor do seu produto com desconto é: %.2f", calculo);

}
int main(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

float produto, desconto, calculo;

printf ("\nInsira o valor do produto: ");
scanf ("%f", & produto);
printf ("\nInsira o valor do desconto desse produto: ");
scanf ("%f", & desconto);

novo_valor (produto, desconto, calculo);

return 0;
}