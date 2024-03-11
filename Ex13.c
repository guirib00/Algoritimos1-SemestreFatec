#include "stdio.h"

int main(){
int n1, n2, n3, n4, soma_quadrado;
soma_quadrado=0;
while(soma_quadrado<50000){

printf("Digite o valor do primeiro numero: ");
scanf("%d", &n1);

while (n1<=10 || n1>=25){
    printf("\nDigite o primeiro numero novamente, ele precisa ser maior que 10 e menor que 25: ");
    scanf("%d", &n1);
}

printf("\nDigite o valor do segundo numero: ");
scanf("%d", &n2);

while (n2<0){
    printf("\nDigite o segundo numero novamente, ele precisa ser maior ou igual a 0: ");
    scanf("%d", &n2);
}

n3 = n1 + n2;
n4 = n1*n2*n3;

soma_quadrado = (n1*n1)+(n2*n2)+(n3*n3)+(n4*n4);
printf("\nA soma dos quadrados e: %d\n\n", soma_quadrado);
}
}
