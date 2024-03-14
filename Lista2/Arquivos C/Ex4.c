#include "stdio.h"

void main(){
int l1, l2, l3, cd_inicial;

printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
scanf("%d", &cd_inicial);

while(cd_inicial==1){

    do{
        printf("\n\nDigite o primeiro lado do triangulo: ");
        scanf("%d", &l1);

        printf("Digite o segundo lado do triangulo: ");
        scanf("%d", &l2);

        printf("Digite o terceiro lado do triangulo: ");
        scanf("%d", &l3);
    }while(l1>=l2+l3 || l2>=l1+l3 || l3>=l1+l2);

    if(l1==l2 && l1==l3){
        printf("O triangulo e equilatero");
    }else if(l1==l2 || l2==l3 || l1==l3){
        printf("O triangulo e isosceles");
    }else{
        printf("O triangulo e escaleno");
    }


    printf("\n\nIniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
}
}
