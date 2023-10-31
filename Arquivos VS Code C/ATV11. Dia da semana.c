/*
Desenvolva um programa que receba como entrada um número inteiro que
represente um dos 7 dias da semana e imprima na tela  o dia da semana, e se esse dia é útil, final
de semana ou inválido.

Considere que Domingo é o dia 1 e Sábado o dia 7.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Permitir Acentuação
    setlocale(LC_ALL, "");
    // Declarando variáveis
    int dia;

    // Solicitando dados ao usuário
    printf("Digite um  n�mero para um dia da semana: ");
    scanf("%d", &dia);
    switch (dia)
    {
    case 1:
        printf("Domingo \n");
        break;
    case 2:
        printf("Segunda-feira \n");
        break;
    case 3:
        printf("Ter�a-feira \n");
        break;
    case 4:
        printf("Quarta-feira \n");
        break;
    case 5:
        printf("Quinta-feira \n");
        break;
    case 6:
        printf("Sexta-feira \n");
        break;
    case 7:
        printf("S�bado \n");
        break;
    default:
        printf("Op��o inv�lida \n");
        break;
    }

    switch (dia)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia �til \n");
        break;
    case 1:
    case 7:
        printf("Final de semana \n");
        break;
    default:
        printf("Op��o inv�lida \n");
        break;
    }

    return 0;
}
