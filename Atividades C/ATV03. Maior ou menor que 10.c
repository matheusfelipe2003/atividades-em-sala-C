/*
Elabore um algoritmo para ler um valor e escrever a mensagem:
“É MAIOR QUE 10!”.
Se o valor lido for maior que 10, caso contrário escrever “NÃO É
MAIOR QUE 10!”
Verifique se o número digitado é igual a 10, caso seja, escreva a
mensagem: “O número é igual a 10!”
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // permitir colocar sinais de acentuação

int main()
{

    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    // Declarando as variáveis
    int numero;

    // Solicitando dados para o usuário
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Mostrando para o usu�rio
    if (numero > 10)
    {
        printf("N�mero maior que 10! \n");
    }

    if (numero < 10)
    {
        printf("N�mero menor que 10! \n");
    }

    if (numero == 10) // (== igual) (! = diferente) (!= n�o igual)
    {
        printf("N�mero � igual a 10! \n");
    }

    /* if else if
    if (numero == 10) {
        printf("O número é igual a 10! \n");
    } else if (numero > 10) {
        printf("É maior que 10! \n");
    } else if (numero > 5) {
        printf("É maior que 5! \n");
    } else if (numero > 5) {
        printf("Não é maior que 10! \n");
    }
    */
   
    return 0;
}