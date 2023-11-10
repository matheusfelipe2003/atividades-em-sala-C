/*idade
sexo e salario
media de salario total quantidade
maior idade,
menor idade
total mulheres com sal acima de 5000
menu com adicionar pessoa -1
sair e exibir resultados 3
*/

#include<stdio.h>
int main(){
    int sexo = 0;
    int maioridade = 0, menoridade = 0, totalmulher = 0, quantidadesalario = 0;
    float salario = 0, media = 0, somasalario = 0;
    int opcao;
    int idade;
    do{
        printf("Digite uma opcao:\n");
        printf("1 - Adicionar Pessoas\n");
        printf("3 - sair e exibir resultados:");
        
        scanf("%d",&opcao);
        if(opcao == 1){
            printf("Digite a idade:");
            scanf("%d", &idade);
            if(idade > maioridade || maioridade == 0){
                maioridade=idade;
            }
            if(idade < menoridade || menoridade == 0){
                menoridade = idade;
            }
            printf("Digite o salario");
            scanf("%f",&salario);
            somasalario += salario;
            quantidadesalario += 1;
            media = somasalario/quantidadesalario;
            printf("digite o sexo (1-masculino / 3-feminino): ");
            scanf("%d",&sexo);
            if(sexo==3 && salario > 5000) {
                totalmulher++;
            }

        }
        else if (opcao == 3){
            printf("A maior idade é:%d\n",maioridade);
            printf("A menor idade é:%d\n",menoridade);
            printf("A media de salario é:%.1f\n",media);
            printf("A quantidade de mulheres com salario alto é %d\n",totalmulher);
            
        }
        else{
            printf("Você digitou a opcao errada.");
        }
    }while(opcao != 3);

    printf("Fim do programa.");
return 0;
}