/*
Escrever um algoritmo que mostre os números ímpares entre 1 e 15.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir AcentuaÃÂ§ÃÂ£o
    setlocale(LC_ALL, "");

    int i;
    
    for (i= 1; i <=15 ; i++) {
        if (i % 2 != 0) {
            printf("%d \n", i);
        }
    }
  return 0;
    
}