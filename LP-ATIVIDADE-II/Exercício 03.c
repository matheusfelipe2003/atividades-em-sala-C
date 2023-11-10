/*
Exercício 2: 
Em um projeto de classificação de alunos, desenvolva um programa que receba a nota de um aluno e determine sua classificação com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razoável"
   - Nota menor que 5: "Insuficiente"
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int nota;

    //
    printf("Informe sua nota: ");
    scanf("%d", &nota);

    if (nota >= 9 && nota <= 10) {
        printf("\nExcelente!");
    } else if (nota >= 7 && nota < 8.9) {
        printf("\nBom!");
    } else if (nota >= 5 && nota < 6.9) {
        printf("\nRazo�vel!");
    } else {
        printf("\nInsuficiente!");
    }

    return 0;

}