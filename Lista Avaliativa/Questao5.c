#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8); 

int idade, i, sexo;
char nome [50];

for (i=0; i<20; i++){

printf ("\nInforme o seu nome: ");
fflush (stdin);
fgets (nome,50,stdin);
printf ("\nInforme a sua idade: ");
scanf ("%d", &idade);
printf ("\nInforme o seu sexo (Use 1 para Masculino ou 2 para Feminino): ");
scanf ("%d", &sexo);

if (idade > 21 && sexo == 1){
    printf ("O seu nome é: %s", nome);
}
}
return 0;
}

