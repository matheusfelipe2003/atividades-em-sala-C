/*
Exercício 6: 
Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário o código do produto 
(1 - Camiseta, 2 - Calça, 3 - Sapato). Com base na escolha do usuário, exiba a mensagem informando o
produto selecionado e seu preço.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int codigo;

    //
    printf("Selecione o produto desejado: \n1 - Camiseta \n2 - Cal�a \n3 - Sapato \n");
    printf("Digite o c�digo: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1 :
        printf("\nProduto escolhido: Camiseta \n");
        printf("Pre�o do produto: R$35,00");
        break;
        case 2 :
        printf("\nProduto escolhido: Cal�a \n");
        printf("Pre�o do produto: R$80,00");
        break;
        case 3 :
        printf("\nProduto escolhido: Sapato \n");
        printf("Pre�o do produto: R$120,00");
        break;
        default :
        printf("\nC�digo inv�lido!");
    }

    return 0;

}