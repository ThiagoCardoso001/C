#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8); 

int numconsu, cod,  res, com;
float consumo=0, custo1=0, custo2=0, media1=0, media2=0, custo3=0, consumo1=0, consumo2=0, consumo3=0;

while (cod != 0){

printf ("\nInsira o seu número de consumidor ou digite 0 para sair do programa: ");
printf ("\nSeu n° de consumidor -> ");
scanf ("%d", &numconsu);

if (numconsu == 0){
    printf ("Operação encerrada.");
    break;
}
printf ("\nInforme a quantidade de kWh consumidos durante o mês: ");
printf ("\n-> ");
scanf ("%f", &consumo);

printf ("\nEscolha um dos códigos de consumidor abaixo: \n");
printf ("\n1-Residencial");
printf ("\n2-Comercial");
printf ("\n3-Industrial");
printf ("\nSeu código -> ");
scanf ("%d", &cod);

switch(cod){

    case 1: 
    res++;
    custo1 = consumo * 0.3;
    custo1++;
    consumo1 += consumo;
    break;

    case 2: 
    com++;
    custo2 = consumo * 0.5;
    custo2++;
    consumo2 += consumo;
    break;

    case 3: 
    custo3 = consumo * 0.7;
    custo3 ++;
    consumo3 += consumo;
    break;
}

}


printf ("\nO custo total para cada consumidor é: \n");
printf ("\nConsumidor residencial: %.2f", custo1);
printf ("\nConsumidor comercial: %.2f", custo2);
printf ("\nConsumidor industrial: %.2f\n\n", custo3);

printf ("\nO total de consumo para os três tipos de consumidor é: \n");
printf ("\nConsumidor residencial: %.0f", consumo1);
printf ("\nConsumidor comercial: %.0f", consumo2);
printf ("\nConsumidor industrial: %.0f\n\n", consumo3);

media1 += consumo1/res;
media2 += consumo2/com;

printf ("\nA média de consumo dos tipos 1 e 2 é: \n");
printf ("\nMédia tipo 1: %.2f", media1);
printf ("\nMédia tipo 2: %.2f", media2);

return 0;
}





