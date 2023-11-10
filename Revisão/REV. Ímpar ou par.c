#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "");

int numero;

printf("Digite um número:");
scanf ("%d", &numero);

switch (numero %2){
case 0:
    printf("O número é par!");
    break;
default:
    printf("O número é ímpar!");
    break;
}
    return 0;
}
