#include <stdio.h>
#include <stdlib.h>
//include <string.h>
int main()
{
    // Declarando variáveis
    int idade;
    float peso;
    char sexo[500];
    char nome[500];

    // Solicitando dados para o usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite seu sexo: ");
    scanf("%s", &sexo);

    fflush(stdin); // limpar cache de input

    printf("Digite seu nome: ");
    // Pode ser usado fgets ou gets
    //fgets(nome, 500, stdin);
    //nome[strcspn(nome, "\n")] = 0;
    gets(nome);

    

    system("cls || clear"); // limpatela

    // Exibindo os dados para o usuário
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %.2f kg \n", peso);
    printf("Sexo: %s \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}