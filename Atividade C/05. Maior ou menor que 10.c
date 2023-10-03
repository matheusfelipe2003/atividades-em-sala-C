#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // permitir colocar sinais de acentuaÃ§Ã£o

int main()
{

    // Permitir Acentuação
    setlocale(LC_ALL, "");

    // Declarando as variÃ¡veis
    int numero;

    // Solicitando dados para o usuÃ¡rio
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Mostrando para o usuário
    if (numero > 10)
    {
        printf("Número maior que 10!");
    }

   if (numero < 10)
    {
        printf("Número menor que 10!");
    }

    if (numero == 10) // (== igual) (!diferente) (!= não igual)
    {
        printf("Número é igual a 10!");
    }
    return 0;
}