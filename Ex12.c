#include "stdio.h"

int main(){
float salario_inicial, salario_reajuste;

printf("Digite o salario do funcionario: ");
scanf("%f", &salario_inicial);

if(salario_inicial < 800){
    salario_reajuste = salario_inicial + salario_inicial*0.15;
}
else if(salario_inicial >= 800 && salario_inicial <= 1000){
    salario_reajuste = salario_inicial + salario_inicial*0.1;
}
else if(salario_inicial > 1000){
    salario_reajuste = salario_inicial + salario_inicial*0.05;
}
printf("\nSalario inicial: R$%.2f \nSalario com reajuste: R$%.2f", salario_inicial, salario_reajuste);
}
