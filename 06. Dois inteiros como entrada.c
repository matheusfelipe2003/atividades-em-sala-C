#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // Permitir Acentuação
    setlocale(LC_ALL, "");

    // Declarando variáveis
    int numero1;
    int numero2;
    float media;
    int soma;
    int produto;
    int maior;
    int menor;

    // Solicitabdio dados para cliente
    printf("Digite o primeiro número \n");
    scanf("%d", &numero1);
    printf("Digite o primeiro número \n");
    scanf("%d", &numero2);

    // Cáculos
    soma = (numero1 + numero2);
    media = soma / 2;
    produto = (numero1 * numero2);

    // Verificando se são maior ou menor
    /* if (numero1 > numero2) {
        maior = numero1;
        menor = numero2;
    } else {
        maior = numero2;
        menor = numero1;
    }
    */
    // Verificando se são maior ou menor fazendo pergunta
    maior = numero1 > numero2 ? numero1 : numero2;
    menor = numero1 < numero2 ? numero1 : numero2;

    // Mostrando ao UsuÃ¡rio
    system("cls || clear"); // limpatela
    printf("Primeiro número: %d \n", numero1);
    printf("Segundo número: %d \n", numero2);
    printf("Soma: %d \n", soma);
    printf("Produto: %d \n", produto);
    printf("Media: %.2f \n", media);
    printf("Maior número: %d \n", maior);
    printf ("Menor número: %d \n", menor);
   

            return 0;
}