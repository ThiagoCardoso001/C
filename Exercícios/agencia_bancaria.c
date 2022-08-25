#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main ()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

    int conta =  0, cliente = 0, negativo = 0 ;
    float saldo ,soma = 0;
    char nome[40];

    while (cliente < 2){

    printf ("\nInsira o número da sua conta ou digite -999 para sair: \n");
     scanf ("%i",&conta);

    if (conta == 1){
    break;
    }

    printf ("Digite o seu nome completo: \n");
    gets(nome);

    printf ("Digite o valor do seu saldo: \n");
    scanf ("%f",&saldo);

    soma += saldo;

    if (saldo < 0){
    printf ("O valor do seu saldo %.2f está negativo\n", conta, saldo);
    negativo+= 1;
    }
    else {
    printf ("O valor do seu saldo %.2f está positivo\n", conta, saldo );
    }
    cliente++;


    }
    printf ("\nO total de clientes da agencia sao: %i",cliente);
    printf ("\nO total de clientes que tem saldo negativo sao: %i\n", negativo);
    printf ("O saldo da  agencia e: %.2f\n\n", soma);


return 0;

}


    
