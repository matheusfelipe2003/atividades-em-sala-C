#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // permitir colocar sinais de acentuação

int main()
{

    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    // Declarando as variáveis
    int numero;

    // Solicitando dados para o usuário
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Mostrando para o usu�rio
    if (numero > 10)
    {
        printf("N�mero maior que 10!");
    }

   if (numero < 10)
    {
        printf("N�mero menor que 10!");
    }

    if (numero == 10) // (== igual) (!diferente) (!= n�o igual)
    {
        printf("N�mero � igual a 10!");
    }
    return 0;
}