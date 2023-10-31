/*
Elabore um algoritmo usando operações lógicas para ler 3 números
e escrever:

    Os 3 números informados
    O maior número
    O menor número
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

     // Permitir Acentua??o
     setlocale(LC_ALL, "portuguese");
    // Declarando vari?veis
    int primeironummero, segundonumero, terceironumero, maior, menor;
    // Solicitabdio dados para cliente

    printf("Digite o primeiro n�mero: ");
    scanf ("%d", &primeironummero);

    printf("Digite o segundo n�mero: ");
    scanf ("%d", &segundonumero);

    printf("Digite o terceiro n�mero: ");
    scanf ("%d", &terceironumero);

    //Opera��o tern�ria
    maior = primeironummero > segundonumero ? primeironummero : segundonumero;
    maior = maior > terceironumero ? maior : terceironumero;

    menor = primeironummero < segundonumero ? primeironummero : segundonumero;
    menor = menor <terceironumero ? menor : terceironumero;

    // Mostrando ao Usu�rio
    printf ("\nMaior n�mero: %d \n", maior);
    printf ("Menor n�mero: %d \n", menor);

return 0;
}





