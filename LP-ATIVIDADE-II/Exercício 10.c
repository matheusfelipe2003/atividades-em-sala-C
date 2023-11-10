/*
Exercício 10: 
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -).
Utilize o switch case para realizar a operação desejada e exibir o resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1;
    int n2;
    int i;
    int conta;
    int resultado;

    printf("Digite o 1� n�mero: ");
    scanf("%d", &n1);
    printf("Digite o 2� n�mero: ");
    scanf("%d", &n2);

    system("cls|| clear");

    printf("1 PARA SOMAR\n");
    printf("2 PARA SUBTRAIR\n");
    printf("\n");
    printf("ESCOLHA A OP��O DE OPERA��O: ");
    scanf("%d", &conta);

    switch (conta)
    {
    case 1:
        resultado = n1 + n2;
        printf("resultado da soma: %d", resultado);
        break;
    case 2:
        resultado = n1 - n2;
        printf("resultado da subtra��o: %d", resultado);
        break;

    default:
        printf("Op��o inv�lida. \n");
        break;
    }

    return 0;
}