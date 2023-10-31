/*
Escreva um algoritmo que solicite do usuário um número e mostre
a tabuada de multiplicação do número informado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir Acentuação
    setlocale(LC_ALL, "");

    int i;
    int n;
    printf("Escreva o n�mero que voc� deseja a tabuada:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", n, i, n * i);
    }
    return 0;
    
}