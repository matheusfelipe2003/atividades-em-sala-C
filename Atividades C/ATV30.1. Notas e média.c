#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    // Permitir Acentuaaï¿½ï¿½o
    setlocale(LC_ALL, "");

    int nota[3];
    int tamanho = 3;
    int i;
    int soma = 0;
    float media;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite a %d nota: ", i + 1);
        scanf("%d", &nota[i]);
        soma += nota[i];
    }

    media = soma / tamanho;

    system("cls || clear"); // limpatela
    printf("\nExibindo as notas digitados...\n");

    for (i = 0; i < tamanho; i++)
    {
        printf("%d nota: %d \n", i + 1, nota[i]);
    } printf("Média: %f \n",media);

    return 0;
}