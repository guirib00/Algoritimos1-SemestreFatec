#include "stdio.h"

void main(){
int cd_inicial, aulas, nivel_professor;
float salario;

printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
scanf("%d", &cd_inicial);

while(cd_inicial==1){

    do{
        printf("\n\nDigite o nivel do professor: ");
        scanf("%d", &nivel_professor);

        if(nivel_professor!=1 && nivel_professor!=2 && nivel_professor!=3)
            printf("digite um nivel valido");
    }while(nivel_professor!=1 && nivel_professor!=2 && nivel_professor!=3);


    do{
        printf("Digite a quantidade de aulas dadas: ");
        scanf("%d", &aulas);

        if(aulas<0){
            printf("\nA quantidade de aulas dadas e invalida\n");
        }
    }while(aulas<0);

    switch(nivel_professor){
        case 1:
            salario = 55*aulas;
        break;
        case 2:
            salario = 67*aulas;
        break;
        case 3:
            salario = 78*aulas;
        break;
    }

    printf("O salario desse professor e %.2f", salario);

    printf("\n\nIniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
}
}
