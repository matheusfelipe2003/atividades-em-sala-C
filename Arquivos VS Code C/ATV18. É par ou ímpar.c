/*
Escrever um algoritmo que informa se o número inserido é par ou ímpar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir AcentuaÃ§Ã£o
    setlocale(LC_ALL, "");

    int i;
    int numero;
    printf("Escreva o n�mero que você deseja a tabuada:");
    scanf("%d", &numero);

    if (numero %2 ==0){
        printf ("%d  O n�mero � par. \n", numero);
    }else{
        printf("%d O n�mero � �mpar. \n", numero);
    }
  return 0;
    
}