#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Permitir Acentuaa��o
    setlocale(LC_ALL, "");

    int numeros[3];

    printf("Digite o 1� n�mero: ");
    scanf("%d", &numeros[0]);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numeros[1]);

    printf("Digite o 3� n�mero: ");
    scanf("%d", &numeros[2]);

    system("cls || clear"); // limpatela

    printf("\nExibindo os n�meros digitados...\n");

    printf("1� n�mero: %d \n", numeros[0]);
    printf("2� n�mero: %d \n", numeros[1]);
    printf("3� n�mero: %d \n", numeros[2]);

    return 0;
}