#include "stdio.h"

int main()
{
float valor_produto, desconto, reajuste;

printf("Digite o valor do produto: ");
scanf("%f", &valor_produto);

desconto = valor_produto - valor_produto*0.09;
reajuste = valor_produto + valor_produto*0.1;

printf("\nValor do produto com desconto: R$%.2f \nValor do produto com reajuste R$%.2f", desconto, reajuste);
}
