/*Faça um programa que calcule o "peso ideal" de um usuário de acordo com um caractere identificador de sexo 
("M" para Masculino ou "F" para Feminino) inserido pelo mesmo. 

A fórmula para cada um dos dois casos está definida abaixo.

Caso "M", utilize a fórmula:
(72.7 x altura) - 58

Caso "F" , utilize a fórmula:
(62.1 x altura) - 44.7
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    // Permitir Acentuação
    setlocale(LC_ALL, "");
    // Declarando Variáveis
    float altura,pesoideal;
    char sexo;

    printf("Informe o seu sexo:\n");
    printf(" M | Masculino:\n");
    printf(" F | Feminino:\n");
    scanf("%c", &sexo);
    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    switch (sexo)
    {
    case 'M':
        pesoideal = (72.7*altura) - 58 ;
        break;
    case 'F':
         pesoideal = (62.1*altura) - 44.7;
         break;
    default:
        printf("Opção invalida!");
        break;
    }
    printf("Peso ideal: %.2f \n", pesoideal);
    return 0;
}