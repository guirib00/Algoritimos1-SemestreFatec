#include "stdio.h"

int main()
{
int n1;
printf("Digite um numero: ");
scanf("%d", &n1);

if(n1 == 0){
    printf("O numero digitado é igual a zero");
}
else if(n1 > 0){
    printf("O numero e positivo");
}
else{
    printf("O numero e negativo");
}

return 0;
}
