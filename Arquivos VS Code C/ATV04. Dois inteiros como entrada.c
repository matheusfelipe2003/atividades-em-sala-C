/*
Elabore um algoritmo para receber dois inteiros como entrada do
teclado e escreva na tela:
A média, a soma, o produto, o menor valor e o maior valor.
Usando uma linha para cada resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    // Declarando vari�veis
    int numero1;
    int numero2;
    float media;
    int soma;
    int produto;
    int maior;
    int menor;

    // Solicitabdio dados para cliente
    printf("Digite o primeiro n�mero \n");
    scanf("%d", &numero1);
    printf("Digite o primeiro n�mero \n");
    scanf("%d", &numero2);

    // C�culos
    soma = (numero1 + numero2);
    media = soma / 2;
    produto = (numero1 * numero2);

    // Verificando se s�o maior ou menor
    /* if (numero1 > numero2) {
        maior = numero1;
        menor = numero2;
    } else {
        maior = numero2;
        menor = numero1;
    }
    */
    // Verificando se s�o maior ou menor fazendo pergunta
    maior = numero1 > numero2 ? numero1 : numero2;
    menor = numero1 < numero2 ? numero1 : numero2;

    // Mostrando ao Usuário
    system("cls || clear"); // limpatela
    printf("Primeiro n�mero: %d \n", numero1);
    printf("Segundo n�mero: %d \n", numero2);
    printf("Soma: %d \n", soma);
    printf("Produto: %d \n", produto);
    printf("Media: %.2f \n", media);
    printf("Maior n�mero: %d \n", maior);
    printf ("Menor n�mero: %d \n", menor);
   

            return 0;
}