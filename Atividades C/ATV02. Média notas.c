/*
Elabore um algoritmo para ler o nome de um aluno e as três notas. Calcular a média anual do aluno.
Caso a média do aluno seja menor que 7, o aluno está reprovado.
Mostrar: nome, média e se está aprovado ou reprovado.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variáveis
    char nome[500];
    float nota1;
    float nota2;
    float nota3;
    float media;

    // Solicitando dados para o usuário
    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite a sua primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota:");
    scanf("%f", &nota3);

    // Calculando a média
    media = (nota1 + nota2 + nota3) / 3;

    system("cls || clear"); // limpatela

    // Mostrando para o usuário
    printf("Nome: %s \n", nome);
    printf("Primeira nota: %.2f \n", nota1);
    printf("Segunda nota: %.2f \n", nota2);
    printf("Terceira nota: %.2f \n", nota3);
    printf("Media: %.2f \n", media);

    // Condicional Sim ou Não
    if (media >= 7)
    {
        printf("Aprovado");
    }
    else 
    {
        printf("Reprovado");
    }
    
    return 0;

}