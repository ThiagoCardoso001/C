#include <stdio.h>


int main (){

//tipo de variavel nome e tamanho
int vetor_test[5];
int x;

vetor_test[0] = 34;
vetor_test[1] = -3;
vetor_test[2] = 0;
vetor_test[3] = 6;
vetor_test[4] = -8;

printf ("\nOs elementos deste vetor:  ");


printf ("\nelemento da posicao 0 do vetor = %d",vetor_test[0]);
printf ("\nelemento da posicao 1 do vetor = %d",vetor_test[1]);
printf ("\nelemento da posicao 2 do vetor = %d",vetor_test[2]);
printf ("\nelemento da posicao 3 do vetor = %d",vetor_test[3]);
printf ("\nelemento da posicao 4 do vetor = %d",vetor_test[4]);


x = vetor_test[3] * vetor_test[4];
printf ("\nelemento 3 multiplicado pelo elemento 4 = %d\n",x);

vetor_test[0] *=2;
printf ("\nElemento do  vetor 0 multiplicado por 2 = %d\n",vetor_test[0]);




return 0;
}