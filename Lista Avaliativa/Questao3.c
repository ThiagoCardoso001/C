#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int time, fluminense = 0, botafogo = 0, vasco = 0, flamengo = 0, outros = 0, local, rjoutros = 0, niteroiflu = 0;
    float sal, soma = 0, media = 0;

    while (time != 0)
    {

        printf("\nQual o seu time do coração? -> Caso deseje sair do programa, digite 0\n");
        printf("\n1-Fluminense");
        printf("\n2-Botafogo");
        printf("\n3-Vasco");
        printf("\n4-Flamengo");
        printf("\n5-Outros");
        printf("\n-> ");
        scanf("%d", &time);

        if (time == 0)
        {
            printf("Programa encerrado.");
            break;
        }
        printf("\nOnde você mora?\n");
        printf("\n1-RJ");
        printf("\n2-Niterói");
        printf("\n3-Outros");
        printf("\n-> ");
        scanf("%d", &local);

        if (local == 1 && time == 4)
        {
            rjoutros++;
        }

        if (local == 2 && time == 1)
        {
            niteroiflu++;
        }

        printf("\nQual o seu salário?\n");
        printf("-> ");
        scanf("%f", &sal);

        switch (time)
        {

        case 1:
            fluminense++;
            break;
        case 2:
            botafogo++;
            break;
        case 3:
            vasco++;
            break;
        case 4:
            flamengo++;
            break;
        case 5:
            outros++;
            break;
        }
        soma += sal;
    }
    media = soma / botafogo;

    printf("\nO número de torcedores por clube é:\n");
    printf("\nFluminense: %d torcedores", fluminense);
    printf("\nBotafogo: %d torcedores", botafogo);
    printf("\nVasco: %d torcedores", vasco);
    printf("\nFlamengo: %d torcedores", flamengo);
    printf("\nOutros: %d torcedores\n", outros);

    printf("\nA média salarial dos torcedores do botafogo é: R$%.2f\n", media);
    printf("\nO número de pessoas que moram no Rio de Janeiro e torcem para outros clubes é: %d\n", rjoutros);
    printf("\nO número de pessoas que moram em Niterói e torcem pro fluminense é: %d\n", niteroiflu);

    return 0;
}
