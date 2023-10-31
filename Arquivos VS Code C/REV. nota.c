/*
Escreva um algoritmo que leia três notas de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.

Após receber as notas dentro dos parâmetros acima, calcule a média e
verifique se o aluno está aprovado, recuperação ou reprovado
considerando os seguintes critérios:

Se a média for a partir de 7, aprovado;
Se a média for entre 5 e 6,9, o aluno está em recuperação;
Caso seja menor que 5, o aluno está reprovado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Permitir Acentua��o
    setlocale(LC_ALL, "");

    float nota1;
    float nota2;
    float nota3;
    float media;


   do{
    printf("Digite a primeira nota:");
    scanf("%f",&nota1);
   } while (nota1 < 0 || nota1 > 10);

   do{
    printf("Digite a segunda nota:");
    scanf("%f",&nota2);
   } while (nota2 < 0 || nota2 > 10);

   do{
    printf("Digite a terceira nota:");
    scanf("%f",&nota3);
   } while (nota3 < 0 || nota3 > 10);

   media = (nota1+nota2+nota3) /3;

  system("cls || clear"); // limpatela

printf("A média é: %f \n", media);

if (media >= 7) {
    printf ("Aluno aprovado \n");
    }
if (media < 5) {
    printf ("Aluno reprovado! \n");
    }
if (media >= 5 && media < 7) {
    printf ("Aluno em recuperação! \n");
    }
        return 0;
    }
