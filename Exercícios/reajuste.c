#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
   
float novo_saldo ( float saldo, float reajuste, float calculo){
    
    calculo = saldo + (saldo * reajuste/100);
    printf ("\nO seu novo saldo é: %.2f", calculo);
   
}
int main(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

float saldo, reajuste, calculo;

printf ("\nDigite aqui o valor do seu saldo: ");
scanf ("%f", &saldo);
printf ("\nDigite aqui o valor do reajuste: ");
scanf ("%f", &reajuste);

novo_saldo (saldo, reajuste, calculo);

return 0;
}




