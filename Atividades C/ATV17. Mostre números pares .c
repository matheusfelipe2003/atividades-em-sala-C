/*
Escrever um algoritmo que gera e escreve os
números pares e ímpares entre 1 e 20.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir Acentuação
    setlocale(LC_ALL, "");

    int i;

    for (i = 1; i <= 20; i += 2){
        printf("%d \n", i);
    }

    printf ("\n");

    for (i = 1; i <= 20; i++){
        if (i % 2 == 0){
        printf("%d \n", i);   
        }
       
    }
    return 0;
}