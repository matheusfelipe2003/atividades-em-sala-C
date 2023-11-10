/*
Exercício 8:
Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva 
a partir desse número até zero. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int n = 0;
    int i = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    for (i = n; i >= 0; i--)
    {
        printf("%d\n", n);
        n = n - 1;
    }

    return 0;

}