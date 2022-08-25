#include <stdio.h>
#include <stdlib.h>

void main()
{
int *pNum; //declaracao de ponteiro
int num, num2;
pNum = &num; //aponta pNum para num
*pNum = 10; //atribui valor a num por meio do apontamento
num2 = 20; //atribui valor a num2
num2 += *pNum; //atribui valor a num2 por meio do ponteiro

 //obtendo valor de variaveis
printf("conteudo de num: %d \n", num);
printf("endereco de num: %d \n", &num);
printf("conteudo de num2: %d \n", num2);
printf("endereco de num2: %d \n", &num2);

 //obtendo valor de ponteiros
printf("conteudo de pNum: %d \n", pNum);
printf("conteudo do apontamento de pNum: %d \n", *pNum);
printf("endereco de pNum: %d \n", &pNum);
}