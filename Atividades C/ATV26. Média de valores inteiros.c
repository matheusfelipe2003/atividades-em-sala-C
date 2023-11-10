/*
Construa um algoritmo que calcule a média aritmética
de vários valores inteiros positivos, inseridos pelo usuário.

O final da leitura acontecerá quando for lido um valor
negativo.

Mostre a média aritmética dos números informados pelo
usuário.
*/
#include <stdio.h>

int main()
{
    int valor = 0, qtd = 0, soma = 0;
    float media = 0;

    while (valor >= 0)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor >= 0)
        {
            qtd++;
            soma += valor;
        }
    }
    media = soma / (float)qtd; // Cast

    printf("A média dos valores é: %f \n", media);

    return 0;
}
