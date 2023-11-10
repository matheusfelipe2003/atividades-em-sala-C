/*
Exercício 14: 
Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares.
Além disto, deve ser exibido a média aritmética de números pares e impares.
Deve-se interromper a leitura dos dados quando for digitado um valor negativo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numero, par = 0, impar = 0, quantidadegeral = 0, somageral = 0, somapar = 0, somaimpar = 0;
    float mediageral, mediaimpar, mediapar;

    //
    do {
        printf("Digite o %d� n�mero: ", quantidadegeral + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            somageral += numero;
            quantidadegeral++;

            if (numero % 2 == 0) {
                somapar += numero;
                par++;
            } else {
                somaimpar += numero;
                impar++;
            }
        }
    } while (numero > 0);

    // Cast
    mediageral = somageral / (float) quantidadegeral;
    mediapar = somapar / (float) par;
    mediaimpar = somaimpar / (float) impar;

    //
    printf("\nQuantidade de n�meros pares: %d \n", par);
    printf("Quantidade de n�meros �mpares: %d \n", impar);
    printf("M�dia dos n�meros pares: %.1f \n", mediapar);
    printf("M�dia dos n�meros �mpares: %.1f \n", mediaimpar);
    printf("M�dia geral dos n�meros: %.1f \n", mediageral);

    return 0;

}