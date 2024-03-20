#include "stdio.h"
int main()
{
    int horas_trabalhadas, cd_inicial;
    float salario_minimo, salario_bruto, salario_receber, valor_hora, imposto;

    printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
    scanf("%d", &cd_inicial);

    while(cd_inicial==1){

    do{
        printf("\n\nDigite a quantidade de horas trabalhadas: ");
        scanf("%d", &horas_trabalhadas);

        if(horas_trabalhadas<0)
            printf("\nA quantidade de horas trabalhadas nao pode ser negativa");
    }while(horas_trabalhadas<0);


    do{
        printf("Digite o valor do salario minimo: ");
        scanf("%f", &salario_minimo);

        if(salario_minimo<=0){
            printf("\nO valor do salario minimo nao pode ser menor ou igual a 0 \n");
        }
    }while(salario_minimo<=0);

    valor_hora = salario_minimo/2;
    salario_bruto = horas_trabalhadas*valor_hora;
    imposto = 0.03*salario_bruto;
    salario_receber = salario_bruto - imposto;

    printf("O salario a receber e R$%.2f", salario_receber);

    printf("\n\nIniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
    }
    return 0;
}
