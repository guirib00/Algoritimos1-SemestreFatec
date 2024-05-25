#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cd_inicial;
    float altura, peso;
    char classificacao;
    printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
    scanf("%d", &cd_inicial);


while(cd_inicial==1){

    do{
        system("cls");
        printf("Digite a sua altura em metros: ");
        scanf("%f", &altura);

        if(altura<=0){
            printf("Essa altura invalida\n");
            system("pause");
        }
    }while(altura<=0);


    do{
        system("cls");
        printf("Digite o seu peso em kg: ");
        scanf("%f", &peso);

        if(peso<=0){
            printf("Peso invalido\n");
            system("pause");
        }
    }while(peso<=0);


    if(altura<1.20){
        if(peso<=60)
            classificacao = 'A';
        else if(peso>60 && peso<= 90)
            classificacao = 'D';
        else
            classificacao = 'G';
    }else if(altura >=1.20 && altura <=1.70){
        if(peso<=60)
            classificacao = 'B';
        else if(peso>60 && peso<= 90)
            classificacao = 'E';
        else
            classificacao = 'H';
    }else{
        if(peso<=60)
            classificacao = 'C';
        else if(peso>60 && peso<= 90)
            classificacao = 'F';
        else
            classificacao = 'I';
    }
    system("cls");
    printf("A sua classificacao e: %c\n", classificacao);

    system("pause");
    system("cls");

    printf("Iniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
}

    return 0;
}
