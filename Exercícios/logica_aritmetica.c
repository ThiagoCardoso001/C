#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP (CPAGE_UTF8);

    int num1, num2, n1, n2, i=0 , soma=0;

    printf ("\nNesse programa, o valor do multiplicando (número 1) deve ser menor que o valor do multiplicador (número 2).\n");
    printf ("\nDigite o primeiro número (multiplicando): ");
    scanf ("%d",  & num1);
    printf ("\nDigite o segundo número (multiplicador): ");
    scanf ("%d",  & num2);

    if (n1 < n2){
        
    num1 = n1;
    num2 = n2;
    }

    else{

    num1 = n2;
    num2 = n1;
    }

printf("Soma: ");
while (i != num1){
soma = soma + num2;
printf("+ %d ",num2);
i = i + 1;
}

printf("= %d", soma);
getch();

return 0;

}
    


    


