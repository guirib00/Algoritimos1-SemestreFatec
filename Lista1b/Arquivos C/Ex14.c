#include "stdio.h"

void main(){
int cd_produto, qntd_produto,cd_inicial, cd, cd2;
float preco_unitario, valor_total;

preco_unitario=0;

printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
scanf("%d", &cd_inicial);


while(cd_inicial == 1){
    cd2=1;
    while(cd2!=0){
        printf("\n\nDigite o codigo do produto: ");
        scanf("%d", &cd_produto);
        switch(cd_produto)
        {
        case 1001:
            preco_unitario = preco_unitario+5.32;
            cd2=0;
        break;

        case 1324:
            preco_unitario = preco_unitario+6.45;
            cd2=0;
        break;

        case 6548:
            preco_unitario = preco_unitario+2.37;
            cd2=0;
        break;

        case 987:
            preco_unitario = preco_unitario+5.32;
            cd2=0;
        break;

        case 7623:
            preco_unitario = preco_unitario+6.45;
            cd2=0;
        break;

        default:
            printf("Codigo nao encontrado\n");
            cd = 1;
            cd2 = 1;
        }
    }

    printf("Digite a quantidade de produtos comprados: ");
    scanf("%d", &qntd_produto);

    valor_total = preco_unitario*qntd_produto;

    printf("O valor total e: R$%.2f", valor_total);

    printf("\n\nAdicionar mais produtos - 1\nSair-2\nDigite: ");
    scanf("%d", &cd_inicial);
}

}
