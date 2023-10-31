/*
Escreva um programa utilizando o comando caso-escolha que imprima um
mês do ano de acordo com o número digitado pelo usuário.
Caso o número inserido não corresponda a um mês imprima "Opção inválida".
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Permitir Acentuação
    setlocale(LC_ALL, "");
    // Declarando variáveis
    int mes;
    // Solicitando dados ao usuário
    printf("Digite um  número para um mês do ano: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
    printf("Opção inválida");
        break;
    }

    return 0;
}