/*
Escreva um algoritmo que leia a nota de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    float nota;

    do {
        printf ("Digite uma nota: ");
        scanf ("%f", &nota);
    } while (nota < 0 || nota > 10);
    printf ("Nota: %.1f \n", nota);

    return 0;
    }
