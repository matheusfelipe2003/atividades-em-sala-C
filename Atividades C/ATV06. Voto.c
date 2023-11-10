/*
Elabore um algoritmo usando operações lógicas para informar se
uma pessoa é obrigada a votar.
Considere que a regra é que menores de 18 e maiores que 65 não são
obrigados a votar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    // Permitir Acentuação
    setlocale(LC_ALL, "portuguese");

    // Declarando as vari�veis
    int idade;
    char resultado [200];
    // Solicitando dados para us�ario.
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // OU- OR - ||
    // E - AND - &&
    // NÃO - NOT - !

    // if else (AND) - Mostrando para o us�ario.
    /* if (idade >= 18 && idade <= 65){
        printf("� obrigado a votar! \n");
    } else {
        printf("N�o � obrigado a votar! \n");
    }
    */

    // if else (OR) - Mostrando para o us�ario.
    /*if (idade >= 18 || idade <= 65){
        printf("� obrigado a votar! \n");
    } else {
        printf("N�o � obrigado a votar! \n");
    }
    */

    idade >= 18 && idade <= 65 ?
    strcpy (resultado, "Obrigado a votar!"):
    strcpy (resultado, "N�o � obrigado a votar!");
    printf (resultado);
    return 0;
}