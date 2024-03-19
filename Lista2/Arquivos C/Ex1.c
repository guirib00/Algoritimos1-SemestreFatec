#include "stdio.h"
#include "math.h"

void main(){
int n1, n2, n3, discriminante, cd_inicial;
float raiz1, raiz2;

printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
scanf("%d", &cd_inicial);


while(cd_inicial==1){
    do{
        printf("\n\nDigite o primeiro numero: ");
        scanf("%d", &n1);

        if(n1==0)
            printf("O numero nao pode ser igual a 0");
    }while(n1==0);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    discriminante = (n2*n2) - 4*n1*n3;

    if(discriminante>=0){
        raiz1 = (-n2 + sqrt(discriminante))/(2*n1);
        raiz2 = (-n2 - sqrt(discriminante))/(2*n1);

        printf("A equacao tem como raiz %.2f e raiz %.2f", raiz1, raiz2);
    }
    else{
        printf("A equacao nao tem raizes reais");
    }


    printf("\n\nIniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
}
}
