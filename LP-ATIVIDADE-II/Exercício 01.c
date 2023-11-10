/*
Exercício 1: 
Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura.
O jogo tem um sistema de clima que depende da temperatura externa.
Se a temperatura for superior a 25 graus Celsius, o clima será ensolarado. 
Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso. 
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int temperatura;
    setlocale(LC_ALL, "portuguese");

    printf("Digite a temperatura:");
    scanf("%d",& temperatura);

    if (temperatura > 25)
    {
        printf("O clima está ensolarado!");
    }
    else if (temperatura >= 15)
    {
        printf("O clima está nublado!");
    }
    else
    {
        printf("O clima está chuvoso!");
    }

    return 0;
}