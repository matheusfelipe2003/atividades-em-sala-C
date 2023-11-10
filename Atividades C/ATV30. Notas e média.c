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
    float media;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &nota[i]);
    }
    
    media = (nota[0]+nota[1]+nota[2])/3;

    system("cls || clear"); // limpatela
    printf("\nExibindo os números digitados...\n");

    for (i = 0; i < tamanho; i++)
    {
        printf("%d número: %d \n", i + 1, nota[i]);
        printf("Média: %f \n",media);

    }

    return 0;
}