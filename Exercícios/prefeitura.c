#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

char nome [50];
float prest, sal;

printf ("\nDigite o seu nome completo: ");
fgets (nome,50,stdin);
printf ("\nDigite o valor do seu salário bruto em reais: ");
scanf ("%f", &sal);
printf ("\nDigite o valor da prestação em reais: ");
scanf ("%f", &prest);

prest = sal * 0.3;

if (sal <=0){
printf ("Esse valor é inválido!");
return main();
}

if (prest <= sal * 0.3) {
    printf ("\nEmpréstimo concedido!");
}

else{
    printf ("\nEmpréstimo negado!");
}

    return 0;
}
