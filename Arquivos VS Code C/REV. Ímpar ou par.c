#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "");

int numero;

printf("Digite um n�mero:");
scanf ("%d", &numero);

switch (numero %2){
case 0:
    printf("O n�mero � par!");
    break;
default:
    printf("O n�mero � �mpar!");
    break;
}
    return 0;
}
