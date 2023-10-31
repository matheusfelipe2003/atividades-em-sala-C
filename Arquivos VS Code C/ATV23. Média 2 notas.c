/*
Escreva um algoritmo que solicite duas notas para um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.
Calcule e mostre a média aritmética do aluno.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma

int main()
{

  // Permitir Acentua��o
  setlocale(LC_ALL, "");

  float nota1, nota2;
  float media;
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
  } while (nota1 < 0 || nota1 > 10);

  do
  {
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
  } while (nota2 < 0 || nota2 > 10);
  
  media = (nota1 + nota2) / 2;

  system("cls || clear"); // limpatela

  printf("Primeira nota: %2.f \n", nota1);
  printf("Segunda nota : %2.f \n", nota2);
  printf("Média: %.2f \n", media);

  return 0;
}
