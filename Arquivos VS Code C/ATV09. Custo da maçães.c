/*
Elabore um algoritmo para resolver a seguinte questão:
As maçãs custam R$ 1,30 cada se forem compradas menos de uma
dúzia, e R$ 1,00 se forem compradas pelo menos 12.
Escreva um programa que leia o número de maçãs compradas,
calcule e escreva o custo total da compra.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Permitir Acentua��o
    setlocale(LC_ALL, "");
    // Declarando vari�veis
    int quantidademaca ;
    float preco1 , preco2; 
    //float precounitario, precofinal;

    printf ("Digite o n�mero de ma��es: ");
    scanf("%d", &quantidademaca);

    preco1 = (quantidademaca * 1.30 );
    preco2 = (quantidademaca * 1.00 );

     system("cls || clear"); // limpatela
    // Mostrando para usu�rio

    printf ("N�mero de ma��es: %d \n", quantidademaca);

    if (quantidademaca > 12){
        printf("Valor que deve ser pago: %.2f \n", preco2);
    }else{
        printf("Valor que deve ser pago: %.2f \n", preco1); 
    } 

    /*
    precounitario = quantidademaca < 12 ? 1.30 : 1.0;
    precofinal = quantidademaca * precounitario;
    printf("Pre�o final: R$ %2.f \n", precofinal); 
    */ 
     
    return 0;
}