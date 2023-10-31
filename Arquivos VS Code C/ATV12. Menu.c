/*
Faça um algoritmo que mostre um menu com opções de um cardápio de restaurante para
uma pessoa. A pessoa vai escolher o prato desejado.
Após escolher o prato, o algoritmo deve mostrar o nome e valor do prato escolhido.

    ------------------ MENU ------------------
       C�DGO   |  PRATO          |   VALOR   
    ..........................................
         1     |  PICANHA        |   R$ 25,00  
         2     |  LASANHA        |   R$ 20,00 
         3     |  STROGONOFF     |   R$ 18,00  
         4     |  BIFE ACEBOLADO |   R$ 15,00   
         5     |  P�O COM OVO   |   R$ 13,00  
    __________________________________________
    

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    // Permitir Acentuaa��o
    setlocale(LC_ALL, "");

    // Declarando as vari�veis
    int codgo;

    // Mostrando para o cliente
    printf("------------------ MENU ------------------\n");
    printf("   C�DGO   |  PRATO          |   VALOR   \n");
    printf("..........................................\n");
    printf("     1     |  PICANHA        |   R$ 25,00   \n");
    printf("     2     |  LASANHA        |   R$ 20,00   \n");
    printf("     3     |  STROGONOFF     |   R$ 18,00   \n");
    printf("     4     |  BIFE ACEBOLADO |   R$ 15,00   \n");
    printf("     5     |  P�O COM OVO    |   R$ 13,00   \n");
    printf("__________________________________________\n");
    printf("\n");

    // Mostrando para o cliente
    printf("Digite o c�dgo do prato desejado: \n");
    scanf("%d", &codgo);
    system("\n");

    system("cls || clear"); // limpatela

    // Escolha caso
    switch (codgo)
    {
    case 1:
        printf("C�DGO ESCOLHIDO : C�DGO 01\n");
        printf("PRATO ESCOLHIDO : PICANHA\n");
        printf("VALOR � SER PAGO: R$ 25,00   \n");
        break;
    case 2:
        printf("C�DGO ESCOLHIDO : C�DGO 02\n");
        printf("PRATO ESCOLHIDO : LASANHA\n");
        printf("VALOR � SER PAGO: R$ 20,00   \n");
        break;
    case 3:
        printf("C�DGO ESCOLHIDO : C�DGO 03\n");
        printf("PRATO ESCOLHIDO : STROGONOFF\n");
        printf("VALOR � SER PAGO: R$ 18,00   \n");
        break;
    case 4:
        printf("C�DGO ESCOLHIDO : C�DGO 04\n");
        printf("PRATO ESCOLHIDO : BIFE ACEBOLADO\n");
        printf("VALOR � SER PAGO: R$ 15,00   \n");
        break;
    case 5:
        printf("C�DGO ESCOLHIDO : C�DGO 05\n");
        printf("PRATO ESCOLHIDO : P�O COM OVO \n");
        printf("VALOR � SER PAGO: R$ 13,00   \n");
        break;
    default:
        printf("C�DGO INV�LIDO !\n");
        break;
    }

    return 0;
}