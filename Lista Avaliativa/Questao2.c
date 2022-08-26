#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8); 

int pedido, quant;
float preco, total = 0; 
char data[10];

   while (pedido !=0)
    {
        printf("\nDigite o número correspondente ao pedido ou digite 0 para sair do programa: ");
        scanf("%d", &pedido);
    if (pedido == 0)
    {
    break;
    }
        printf("\nInsira a data do pedido (dd/mm/aaaa): ");
        fflush(stdin);
        gets(data);

        printf("\nDigite o preço unitário: ");
        scanf("%f", &preco);

        printf("\nInsira a quantidade: ");
        scanf("%d", &quant);
        total = quant *preco;
        printf("\nO valor total da sua compra é: R$%.2f\n", total);

    }

    return 0;

    }


    