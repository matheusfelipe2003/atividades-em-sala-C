/*
Exerc√≠cio 7:
Em um projeto para um jogo, √© necess√°rio cria um menu,
crie um programa que exiba um menu com op√ß√µes
(1 - Novo jogo, 2 - Carregar jogo, 3 - Configura√ß√µes).
Solicite ao usu√°rio que escolha uma op√ß√£o e,
utilizando o switch case, execute a funcionalidade
correspondente √† op√ß√£o escolhida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari√°veis
    int opcao;

    // Menu

    printf("---- M E N U ------\n");
    printf(" 1 - Novo jogo\n");
    printf(" 2 - Carregar jogo\n");
    printf(" 3 - ConfiguraÁıes\n");
    printf("\n");
    printf("Digite a opÁ„o desejada: \n");
    scanf("%d", &opcao);
    printf("\n");

    system("cls || clear");

    switch (opcao)
    {
    case 1:
        printf("OP«√O 1 ESCOLHIDA:\n");
        printf("NOVO JOGO :)\n");
        break;
    case 2:
        printf("OP«√O 2 ESCOLHIDA:\n");
        printf("CARREGANDO JOGO!\n");
        break;
    case 3:
        printf("OP«√O 3 ESCOLHIDA:\n");
        printf("CONFIGURA«’ES DE JOGO!\n");
        break;
    default:
        printf("OP«√O INV¡LIDA!");
        break;
    }
    return 0;
}