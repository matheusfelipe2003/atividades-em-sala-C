/*
Escreva um algoritmo que solicite do usuário um número e mostre
a tabuada de multiplicação do número 3 ,5 e 7.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir Acentuação
    setlocale(LC_ALL, "");

    int i;

    // i = i + 1
    // i+= 1 (vai de 1 em 1)
    // i+= 2 (vai de 2 em 2)
    // i+= 3 (vai de 3 em 3)
    // i ++
    // para i de 1 ate 10 passo faca
    for (i = 1; i <= 10; i++){
        printf("3 x %d = %d \n", i, 3 * i);
    } 
    printf("\n");

    for (i = 1; i <= 10; i++){
        printf("5 x %d = %d \n", i, 5 * i);
    }
    printf("\n");

    for (i = 1; i <= 10; i++){
        printf("7 x %d = %d \n", i, 7 * i);
    }
    return 0;
}