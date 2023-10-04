#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    // Permitir AcentuaÁ„o
    setlocale(LC_ALL, "portuguese");

    // Declarando as vari√°veis
    char loginsalvo[200] = "SENAI";
    char senhasalva[200] = "senai123";
    char login[200];
    char senha[200];

    //Solicitando dados para usu√°rio.
    printf ("Digite o seu login: ");
    gets(login);
    
    printf("Digite a sua senha: ");
    gets(senha);

    // OU- OR - ||
    // E - AND - &&
    // N√ÉO - NOT - !

    //String comparator
    //Str cmp

    if (strcmp(login, loginsalvo) == 0 && strcmp(senha, senhasalva) == 0) {
        printf("Bem-vindo!");
    } else {
        printf("Acesso negado!");
    }
return 0; 
}