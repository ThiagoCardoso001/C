#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
 float vA, vB, vC;
 float x1, x2, delta;

 printf ("Bem vindo ao programa, minha funcao e calcular uma equacao de segundo grau. \n");
 printf ("Digite o valor de a: ");
 scanf ("%f", &vA);
 printf ("Digite o valor de b: ");
 scanf ("%f", &vB);
 printf ("Digite o valor de c: ");
 scanf ("%f", &vC);

// Calcula o valor das ra�zes de x

delta = pow(vB,2) - 4*vA*vC;   // comando pow serve para potencia��o
x1 = (-vB + sqrt (delta)) / (2*vA);    // comando sqrt serve para calcular raiz quadrada
x2 = (-vB - sqrt (delta)) / (2*vA);

if (delta < 0) {
printf ("O valor de delta e negativo, a equacao nao possui raizes reais \n");
}
else {
printf ("O valor de x1 e: %.2f", x1);   // .2 pula duas casas decimais
printf ("O valor de x2 e: %.2f", x2);
}
return 0 ;
}
