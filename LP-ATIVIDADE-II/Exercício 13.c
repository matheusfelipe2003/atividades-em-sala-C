/*
Exercício 13: 
Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeroum, numerodois;

    //
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &numeroum);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &numerodois);

    if (numeroum > numerodois) {
        printf("\nPrimeiro n�mero: %d \n", numeroum);
        printf("Segundo n�mero: %d \n", numerodois);
        printf("Maior n�mero: %d \n", numeroum);
        printf("Menor n�mero: %d \n", numerodois);
    } else {
        printf("\nPrimeiro n�mero: %d \n", numeroum);
        printf("Segundo n�mero: %d \n", numerodois);
        printf("Maior n�mero: %d \n", numerodois);
        printf("Menor n�mero: %d \n", numeroum);
    }

    return 0;

}