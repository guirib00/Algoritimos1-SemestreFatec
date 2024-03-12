#include "stdio.h"

void main(){
float preco_fabrica, perc_distribuidor, perc_impostos, preco_final, lucro_distribuidor, impostos;

printf("Digite o preco de fabrica do produto: ");
scanf("%f", &preco_fabrica);

printf("\nDigite o percentual de lucro do distribuidor: ");
scanf("%f", &perc_distribuidor);

printf("\nDigite o percentual de impostos: ");
scanf("%f", &perc_impostos);

impostos = preco_fabrica*(perc_impostos/100);
lucro_distribuidor = preco_fabrica*(perc_distribuidor/100);
preco_final = preco_fabrica+impostos+lucro_distribuidor;

printf("\nO valor correspondente aos impostos e: R$%.2f", impostos);
printf("\nO valor correspondente ao lucro do distribuidor e: R$%.2f",lucro_distribuidor);
printf("\nO preco final do veiculo e: R$%.2f", preco_final);
}
