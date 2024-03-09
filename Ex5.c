#include "stdio.h"

int main()
{
int a, b, restoa, restob;

printf("Digite o primeiro numero: ");
scanf("%d", &a);

printf("Digite o segundo numero: ");
scanf("%d", &b);

restoa = a%2;
restob = b%2;
if(restoa == 0 && restob == 0){
    printf("O numero %d e o numero %d sao pares", a, b);
}
else if(restoa == 0){
    printf("O numero %d e par e o numero %d nao", a, b);
}
else if(restob == 0){
    printf("O numero %d e par e o numero %d nao", b, a);
}
else{
    printf("Nenhum dos numeros sao pares");
}
}
