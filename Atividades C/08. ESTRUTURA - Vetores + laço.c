#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    // Permitir Acentuaaï¿½ï¿½o
    setlocale(LC_ALL, "");

    int numeros[3];
    int tamanho = 3;
    int i;
    
    for(i =0; i < tamanho; i++){
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
      printf("\nExibindo os números digitados...\n");

    for(i=0; i < tamanho; i++){
        printf("%d número: %d \n", i + 1, numeros[i]);
    }

    return 0;
}