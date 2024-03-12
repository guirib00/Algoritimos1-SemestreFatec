#include "stdio.h"

void main()
{
float hora_aula, desconto, salario_liquido;
int aulas;

printf("Digite o valor da hora_aula: ");
scanf("%f", &hora_aula);

printf("\nDigite a quantidade de aulas dadas: ");
scanf("%d", &aulas);

printf("\nDigite a porcentagem de desconto do inss: ");
scanf("%f", &desconto);

salario_liquido = (hora_aula*aulas) - (hora_aula*aulas)*(desconto/100);

printf("\nO salario desse professor e: R$%.2f", salario_liquido);
}
