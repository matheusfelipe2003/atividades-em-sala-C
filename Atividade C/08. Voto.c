#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    // Permitir AcentuaÃ§Ã£o
    setlocale(LC_ALL, "portuguese");

    // Declarando as variáveis
    int idade;
    char resultado [200];
    // Solicitando dados para usúario.
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // OU- OR - ||
    // E - AND - &&
    // NÃƒO - NOT - !

    // if else (AND) - Mostrando para o usúario.
    /* if (idade >= 18 && idade <= 65){
        printf("É obrigado a votar! \n");
    } else {
        printf("Não é obrigado a votar! \n");
    }
    */

    // if else (OR) - Mostrando para o usúario.
    /*if (idade >= 18 || idade <= 65){
        printf("É obrigado a votar! \n");
    } else {
        printf("Não é obrigado a votar! \n");
    }
    */

    idade >= 18 && idade <= 65 ?
    strcpy (resultado, "Obrigado a votar!"):
    strcpy (resultado, "Não é obrigado a votar!");
    printf (resultado);
    return 0;
}