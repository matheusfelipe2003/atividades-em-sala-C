/*
Escreva um algoritmo que solicite duas notas para um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.
Calcule e mostre a média aritmética do aluno.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    float nota;
    float soma = 0;
    float media;
    int i;

    for (i = 0; i < 2; i++)
    {
        do
        {
            printf("Digite a %dª nota: ", i + 1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
        
        soma += nota;
    }
    media = soma / i;

    system("cls || clear"); // limpatela

    printf("Média: %.2f \n", media);

    return 0;
}
