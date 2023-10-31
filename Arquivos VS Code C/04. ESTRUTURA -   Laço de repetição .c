#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

    // Permitir Acentuação
    setlocale(LC_ALL, "");

    int i;

    // i = i + 1
    // i+= 1 (vai de 1 em 1)
    // i+= 2 (vai de 2 em 2)
    // i+= 3 (vai de 3 em 3)
    // i ++
    //para i de 1 ate 10 passo faca
    for (i = 10; i >= 1; i--){
        printf ("%d \n",i);
    }
    return 0;
}