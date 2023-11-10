#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Permitir Acentuaaï¿½ï¿½o
    setlocale(LC_ALL, "");

    int numeros[3];

    printf("Digite o 1º número: ");
    scanf("%d", &numeros[0]);

    printf("Digite o 2º número: ");
    scanf("%d", &numeros[1]);

    printf("Digite o 3º número: ");
    scanf("%d", &numeros[2]);

    system("cls || clear"); // limpatela

    printf("\nExibindo os números digitados...\n");

    printf("1º número: %d \n", numeros[0]);
    printf("2º número: %d \n", numeros[1]);
    printf("3º número: %d \n", numeros[2]);

    return 0;
}