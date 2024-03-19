#include "stdio.h"

void main(){
float salario_inicial, salario_reajuste;

do{
printf("Digite o salario do funcionario: ");
scanf("%f", &salario_inicial);
}while(salario_inicial<=0);
if(salario_inicial < 800){
    salario_reajuste = salario_inicial + salario_inicial*0.15;
}
else if(salario_inicial <= 1000){
    salario_reajuste = salario_inicial + salario_inicial*0.1;
}
else{
    salario_reajuste = salario_inicial + salario_inicial*0.05;
}
printf("\nSalario inicial: R$%.2f \nSalario com reajuste: R$%.2f", salario_inicial, salario_reajuste);
}
