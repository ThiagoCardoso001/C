#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8); 

int i=0;
float sal, aliq; 
char nome[50];

for (i=0; i<10; i++){

printf ("\nDigite o seu nome: ");
fflush (stdin);
gets (nome);
printf ("\nInsira o valor do seu salário: ");
scanf ("%f", &sal);

if (sal<1300){
    printf ("\n%s, o seu salário permanecerá isento.", nome);
    break;
}

else  if (sal>=1300 && sal<2300){
    aliq = sal * 0.10;
    printf ("\n%s, o seu salário corresponde à um imposto de renda de 10%%. O valor desse imposto é: %.2f", nome, aliq);
    break; 
}

else if (sal>=2300){
    aliq = sal * 0.15;
    printf ("\n%s, o seu salário corresponde à um imposto de renda de 15%%. O valor desse imposot é: %.2f", nome, aliq);
    break;

}

}
return 0;
}
