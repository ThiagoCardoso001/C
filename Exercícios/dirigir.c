#include<stdio.h>
#include<stdlib.h>
int main(){  
    int i;
    char nome[100];

    printf("Digite seu nome: \n");
    gets(nome);
    printf("Digite a idade: ");
    scanf("%i", &i);

    if(i >= 18){ 
        printf("%s voce possui idade suficiente para dirigir!", nome);
    }
    else{
        printf(" voce nao possui idade suficiente para dirigir, vai andar a pe!", nome);
    }
    return 0;
}    




