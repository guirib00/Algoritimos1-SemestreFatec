#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float calculoImc(float peso, float altura);
void situacaoImc(float imc);

int main()
{
    int cd_inicial;
    float peso, altura, imc;

    printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
    scanf("%d", &cd_inicial);


while(cd_inicial==1){
    system("cls");

    do{
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if(altura<=0){
            printf("Digite uma altura valida: ");
            scanf("%f", &altura);
        }
    }while(altura<=0);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    imc = calculoImc(peso, altura);
    situacaoImc(imc);

    system("pause");
    system("cls");


    printf("Iniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
}

    return 0;
}
float calculoImc(float peso, float altura)
{
    float imc = peso/pow(altura,2);
    return imc;
}

void situacaoImc(float imc)
{
    if(imc<17){
        printf("Muito abaixo do peso\n");
    }else if(imc>=17 && imc<18.5){
        printf("Abaixo do peso\n");
    }else if(imc>=18.5 && imc<25){
        printf("Peso normal\n");
    }else if(imc>= 25 && imc<30){
        printf("Acima do peso\n");
    }else if(imc>= 30 && imc<35){
        printf("Obesidade I\n");
    }else if(imc>=35 && imc<40){
        printf("Obesidade II(severa)\n");
    }else{
        printf("Obseidade III(morbida)\n");
    }
}


