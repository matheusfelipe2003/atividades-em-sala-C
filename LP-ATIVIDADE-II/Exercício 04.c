/*
Exercício 4: 
Em um projeto de controle de acesso, crie um programa que solicite ao usuário sua idade e
verifique se ele tem permissão para acessar um determinado recurso. Se a idade for maior 
ou igual a 18, exiba a mensagem "Acesso permitido". Caso contrário, exiba a mensagem "Acesso negado".
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int idade;

    //
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("\nIdade: %d anos\n", idade);
        printf("Acesso permitido!");
    } else {
        printf("\nIdade: %d anos\n", idade);
        printf("Acesso negado!");
    }

    return 0;

}