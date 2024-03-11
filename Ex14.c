#include "stdio.h"

int main(){
int cd_produto, qntd_produto,cd_inicial, cd;
float preco_unitario, valor_total;

printf("Iniciar/continuar sistema - 1\nSair - 2\nDigite: ");
scanf("%d", &cd_inicial);

while(cd_inicial == 1){
    printf("\n\nDigite o codigo do produto: ");
    scanf("%d", &cd_produto);

    switch(cd_produto)
    {
    case 1001:
        preco_unitario = 5,32;
    break;

    default:
        printf("Codigo nao encontrado");
        cd = 1;
    }

    printf("\nIniciar/continuar sistema - 1\nSair-2\nDigite: ");
    scanf("%d", &cd_inicial);
}

}
