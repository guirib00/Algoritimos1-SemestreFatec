
#include "stdio.h"

void main(){
int cd_inicial, n1, n2, n3;

printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
scanf("%d", &cd_inicial);

while(cd_inicial==1){
        printf("\n\nDigite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);

        printf("Digite o terceiro numero: ");
        scanf("%d", &n3);

        while(n1==n2 && n1==n3 && n2==n3){

        printf("\n\nOs numeros sao iguais, digite novamente.");

        printf("\nDigite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);

        printf("Digite o terceiro numero: ");
        scanf("%d", &n3);
        }

        if(n1>n2 && n1>n3){
            printf("O numero %d e o maior entre os digitados.", n1);
        }else if(n2>n1 && n2>n3){
            printf("O numero %d e o maior entre os digitados.", n2);
        }else{
            printf("O numero %d e o maior entre os digitados.", n3);
        }

    printf("\n\nIniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
}
}
