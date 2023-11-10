/*
Escrever um programa de computador que solicite
do usuário 5 números inteiros e, ao final, apresente a
soma de todos os números lidos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir AcentuaÃÂ§ÃÂ£o
    setlocale(LC_ALL, "");

    int i, numero;
    int soma = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº número", i);
        scanf("%d", &numero);
        //soma = soma + numero;
        soma += numero;
    }
    printf("Soma: %d", soma); 
        return 0;
    }