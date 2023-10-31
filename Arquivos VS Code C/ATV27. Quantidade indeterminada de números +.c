/*
Faça um algoritmo que leia uma quantidade não
determinada de números inteiros positivos. Calcule:
a) quantidade de números pares e ímpares;
b) média de valores pares
c) média geral dos números lidos.

O número que encerrará a leitura será o número zero.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{
     // Permitir Acentua��o
     setlocale(LC_ALL, "");

    int numero;
    int pares = 0;
    int impares = 0;
    int soma = 0;
    int quantidadegeral = 0;
    int somageral = 0;
    int somapares = 0;
    float mediageral;
    float mediapares;

    do { 
        printf("Digite o %dº número: ", quantidadegeral +1);
        scanf ("%d", &numero);

        if (numero > 0) {
            somageral += numero;
            quantidadegeral++;

            if  (numero %2 == 0) {
                somapares += numero;
                pares++;
            } else {
                impares++;
            }
        }
          
    } while (numero != 0);

    //Cast 
    mediageral = somageral / (float) quantidadegeral;
    mediapares = somapares / (float) pares;

    printf("Quantidade de números pares; %d \n", pares);
    printf("Quantidade de números ímpares; %d \n", impares);
    printf("Média dos números pares: %1.f \n", mediapares);
    printf("Média geral: %1.f \n", mediageral);
    return 0;
}