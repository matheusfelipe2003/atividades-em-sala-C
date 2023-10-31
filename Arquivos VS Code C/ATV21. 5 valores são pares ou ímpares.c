/*
Escreva um algoritmo que leia 5 valores inteiros e ao final
mostre:

a) quantos números são pares;
b) quantos números são ímpares;
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    int i, numero;
    int pares = 0;
    int impares = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %d� número: ", i);
        scanf("%d", &numero);
        
     //   numero % 2 == 0 ? pares++ : impares++;

        if (numero % 2 ==0) {
            pares++;
        }else{
            //impares = impares + 1;
            impares ++;  
        }
    }
    printf ("Pares: %d \n", pares);
    printf ("�mpares: %d \n", impares);

    return 0;
    }
