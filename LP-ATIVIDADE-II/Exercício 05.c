/*
Exercício 5: 
Enquanto você faz parte de uma equipe de desenvolvimento de software, 
desenvolva um programa que solicite ao usuário que escolha um idioma de preferência
(1 - Inglês, 2 - Espanhol, 3 - Francês). Com base na escolha do usuário, 
exiba a mensagem de boas-vindas no idioma selecionado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numero;

    //
    printf("Selecione o idioma desejado: \n1 - Ingl�s \n2 - Espanhol \n3 - Franc�s \n");
    printf("Digite o n�mero: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1 :
        printf("\nWelcome!");
        break;
        case 2 :
        printf("\n�Bienvenida!");
        break;
        case 3 :
        printf("\nAccueillir!");
        break;
        default :
        printf("\nN�mero inv�lido!");
    }

    return 0;

}