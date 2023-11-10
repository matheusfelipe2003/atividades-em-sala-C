/*
6. Escreva um algoritmo que pergunte ao usuário se deseja inserir
mais uma nota, se a resposta do usuário for “N”, o programa fará a
média aritmética das notas informadas e mostrará a média aritmética
para o usuário.

Obs.: Use um contador dentro do laço de repetição para contar a
quantidade de iterações (loops).
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma
#include <ctype.h>

int main()
{

    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    float soma = 0;
    int contador = 0;
    char resposta;
    float nota;
    float media;

    do
    {
        printf("Digite a nota: ");
        scanf("%f", &nota);

        soma += nota;
        contador++;

        fflush(stdin);

        printf("Deseja inserir mais uma nota? ");
        printf("S - Sim \n N - Não \n Resposta:");
        printf("Resposta:");
        scanf("%c", &resposta);
    } while (resposta != 'N');

    media = soma / contador;
    
        printf("\nMédia: %.1f \n", media);
    
    return 0;
}
 