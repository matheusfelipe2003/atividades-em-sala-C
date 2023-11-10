/*
Elabore um algoritmo para receber o login e senha de um usuário.
Caso o usuário e senha estejam corretos, mostre a mensagem
“Bem-vindo!”, caso contrário, mostre a mensagem “Login ou senha
inválidos.”
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    // Permitir Acentua��o
    setlocale(LC_ALL, "portuguese");

    // Declarando as variáveis
    char loginsalvo[200] = "SENAI";
    char senhasalva[200] = "senai123";
    char login[200];
    char senha[200];

    //Solicitando dados para usuário.
    printf ("Digite o seu login: ");
    gets(login);
    
    printf("Digite a sua senha: ");
    gets(senha);

    // OU- OR - ||
    // E - AND - &&
    // NÃO - NOT - !

    //String comparator
    //Str cmp

    if (strcmp(login, loginsalvo) == 0 && strcmp(senha, senhasalva) == 0) {
        printf("Bem-vindo!");
    } else {
        printf("Acesso negado!");
    }
return 0; 
}