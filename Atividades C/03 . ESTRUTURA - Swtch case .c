#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //idioma
#include <string.h> //switch
#include <ctype.h>  //Converte em maiúsculo

int main()
{

    // Permitir Acentuação
    setlocale(LC_ALL, "");

    int idade = 20;           // int = inteiro
    float peso = 80.2;        // float = real
    char sexo = 'F';          // char = apenas um caracter
    char nome[200] = "Marta"; // char + vetor de cacarcter [000] = cadeia de caracter

    printf("Idade: %d \n", idade);
    printf("Peso: %.2f kg \n", peso); // %. número f = indica o número de casas decimais
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);

    system("cls || clear"); // limpatela

    switch ()
    {
    case 1:
        printf("\n");
        break;
    default:
        printf("CÓDGO INVÁLIDO !\n");
        break;
    }

    //  Converte em maiúsculo
    sexo = toupper(sexo);
    return 0;
}