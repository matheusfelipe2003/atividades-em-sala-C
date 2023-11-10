/*
Solicite que o usuário informe o valor de um produto e a forma de pagamento.
1 - Pagamento à vista;
2 - Pagamento à prazo.

Se o produto for pago à vista aplique um desconto de 10% antes de mostrar o valor final, senão informe o mesmo
valor do produto.

Se for escolhida a opção de pagamento à prazo, solicite que o usuário digite a quantidade de parcelas que ele
deseja pagar. Podendo parcelar em até 6 vezes.

No final, mostre:

Se o pagamento for à vista:

Valor do produto: R$ 100,00
Forma de pagamento: à vista
Valor do desconto: R$ 10,00
Total a pagar: R$ 90,00

Se o pagamento for à prazo:

Valor do produto: R$ 100,00
Forma de pagamento: à prazo
Quantidade de parcelas: 6
Valor por parcela: R$ 16,66
Total à prazo: R$ 100,00
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    int parcelas;
    float precoProduto;
    float desconto;
    float precoParcelado;
    float precoFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &precoProduto);

    printf("Escolha uma das formas de pagamento abaixo. \n");
    printf("1 - pagamento a vista \n");
    printf("2 - pagamento a prazo \n");
    printf("Informe a op��o desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        desconto = precoProduto * 0.10;
        precoFinal = precoProduto - desconto;

        printf("\nPre�o do produto: R$ %.2f \n", precoProduto);
        printf("Forma de pagamento: a vista \n");
        printf("Valor do desconto: R$ %.2f \n", desconto);
        printf("Total a pagar: R$ %.2f \n", precoFinal);

        break;
    case 2:
        do
        {
            printf("\nDigite a quantidade de parcelas: ");
            scanf("%d", &parcelas);

            if (parcelas > 6)
            {
                printf("Parcelamento em at� 6 vezes. \nTente novamente...\n");
            }
        } while (parcelas > 6);

        precoParcelado = precoProduto / parcelas;
        precoFinal = precoProduto;

        printf("\nPre�o do produto: R$ %.2f \n", precoProduto);
        printf("Forma de pagamento: a prazo \n");
        printf("Quantidade de parcelas: %d \n", parcelas);
        printf("Valor por parcela: R$ %.2f \n", precoParcelado);
        printf("Total a prazo: R$ %.2f \n", precoFinal);
        break;
    default:
        printf("Op��o inv�lida!");
    }

    return 0;
}