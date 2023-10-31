/*
Elabore um algoritmo usando operações lógicas para uma empresa que quer verificar se
um empregado está qualificado para a aposentadoria ou não.

Para estar em condições, um dos seguintes requisitos deve ser satisfeito:

- Ter no mínimo 65 anos de idade.
- Ter trabalhado no mínimo 30 anos.

Com base nas informações acima, faça um algoritmo que leia: o número do empregado
(código), o ano de seu nascimento e o tempo de trabalho em anos.

O programa deverá escrever o código do empregado, a idade, o tempo de trabalho do
empregado e a mensagem “Requerer aposentadoria” ou “Não requerer aposentadoria”.
*/
int main()
{
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    // Permitir Acentua��o
    setlocale(LC_ALL, "");
    // Declarando vari�veis
    int codgo, anodenascimento, tempotrabalhado, idade;
    // Perguntando para usu�rio
    printf("Digite o n�mero do empregado (C�dgo): ");
    scanf("%d", &codgo);

    printf("Digite o ano de nascimento do empregado: ");
    scanf("%d", &anodenascimento);

    printf("Digite o tempo trabalhado pelo empregado: ");
    scanf("%d", &tempotrabalhado);
    // Descobrindo idade
    idade = 2023 - anodenascimento;
    system("cls || clear"); // limpatela
    // Mostrando para usu�rio
    printf("N�mero do empregado: %d \n", codgo);
    printf("Ano de nascimento do empregado: %d \n", anodenascimento);
    printf("Digite o tempo trabalhado pelo empregado: %d anos \n", tempotrabalhado);
    printf("Idade do empregado: %d anos \n", idade);

    if (idade > 64 && tempotrabalhado > 29) {
    printf ("Requerer aposentadoria!");
    } else {
    printf ("N�o requerer aposentadoria!");   
    }

    return 0;
}
