#include "stdio.h"

int main(){
float valor_produto, valor_final;

printf("Digite o valor do produto: ");
scanf("%f", &valor_produto);

if(valor_produto<100){
    valor_final = valor_produto+valor_produto*0.1;
}
else if(valor_produto>=100){
    valor_final = valor_produto+valor_produto*0.2;
}

printf("\nO valor do produto inflacionado e: R$%.2f", valor_final);
}
