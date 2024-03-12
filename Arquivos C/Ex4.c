#include "stdio.h"

void main()
{
int n1, n2, resto;

printf("Digite o valor do primeiro numero: ");
scanf("%d", &n1);

printf("Digite o valor do segundo numero: ");
scanf("%d", &n2);

if(n2>n1){
    int n3;
    n3=n1;
    n1=n2;
    n2=n3;
}

while(n2==0){
    printf("Digite outro numero para n2 ja que nao pode dividir por 0: ");
    scanf("%d", &n2);
}

resto = n1%n2;
if(resto==0){
    printf("O numero %d e multiplo de %d", n1, n2);
}
else{
    printf("O numero %d nao e multiplo de %d", n1, n2);
}
}
