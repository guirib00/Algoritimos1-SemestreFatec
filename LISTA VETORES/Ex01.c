#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int startSystem();
int restartSystem();
int qntdTreino();
void preencher(int qntd_treino, int *arrayX, int *arrayY);
void mostrarVariaveis(int qntd_treino, int *arrayX, int *arrayY);
int soma(int qntd_treino, int *num);
float media(int qntd_treino, int soma_num);
void desvio(int qntd_treino, float media_num, int *array_num, float *desvio_num);
void mostrarDesvio(int qntd_treino, float *arrayX_media, float *arrayY_media);
void varianca(int qntd_treino, float *desvio_num, float *varianca_num);
void mostrarVarianca(int qntd_treino, float *arrayX_varianca);
void coVarianca(int qntd_treino, float *array_desvioX, float *array_desvioY, float *coVarianca_num);
void mostrarCoVarianca(int qntd_treino, float *array_coVarianca);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cd_inicial, qntd_treino, x[20], y[20], somaX, somaY;
    float xMedia, yMedia, xDesvio[20], yDesvio[20], xVarianca[20], yVarianca[20], coVarianca_num[20];

    cd_inicial= startSystem();

    while(cd_inicial == 1){
        system("cls");

        qntd_treino = qntdTreino();

        preencher(qntd_treino, x, y);

        mostrarVariaveis(qntd_treino, x, y);

        somaX = soma(qntd_treino, x);

        somaY = soma(qntd_treino, y);

        xMedia = media(qntd_treino, somaX);

        yMedia = media(qntd_treino, somaY);

        desvio(qntd_treino, xMedia, x, xDesvio);

        desvio(qntd_treino, yMedia, y, yDesvio);

        mostrarDesvio(qntd_treino, xDesvio, yDesvio);

        varianca(qntd_treino, xDesvio, xVarianca);

        mostrarVarianca(qntd_treino, xVarianca);

        coVarianca(qntd_treino, xDesvio, yDesvio, coVarianca_num);

        mostrarCoVarianca(qntd_treino, coVarianca_num);

        cd_inicial = restartSystem();
    }
}

int startSystem(){
    int cd_inicial;
    do{
        printf("Iniciar sistema - 1\nSair-2\nDigite: ");
        scanf("%d", &cd_inicial);

        if(cd_inicial != 1 && cd_inicial !=2){
            system("cls");
            printf("Digitou um número inválido\n");
            system("pause");
            system("cls");
        }
    }while(cd_inicial != 1 && cd_inicial !=2);

    return cd_inicial;
}

int restartSystem(){
    int cd_inicial;

    do{
        system("cls");
        printf("Reiniciar sistema - 1\nSair-2\nDigite: ");
        scanf("%d", &cd_inicial);
        if(cd_inicial != 1 && cd_inicial !=2){
            system("cls");
            printf("Digitou um número inválido\n");
            system("pause");
            system("cls");
        }
    }while(cd_inicial != 1 && cd_inicial !=2);
    return cd_inicial;
}

int qntdTreino()
{
    int qntd_treino;
    do{
        printf("Digite a quantidade de números que irá fazer o treino: ");
        scanf("%d", &qntd_treino);
        if(qntd_treino < 0|| qntd_treino > 20){
            printf("Quantidade invállida, até 20 números\n Digite novamente");
        }
    }while(qntd_treino < 0|| qntd_treino > 20);

    system("cls");
    return qntd_treino;
}

void preencher(int qntd_treino, int *arrayX, int *arrayY)
{
    int ix;
    for(ix=0; ix<qntd_treino; ix++){
        printf("Digite x: ");
        scanf("%d", &arrayX[ix]);
    }
    system("cls");

    int iy;
    for(iy=0; iy<qntd_treino; iy++){
        printf("Digite y: ");
        scanf("%d", &arrayY[iy]);
    }
    system("cls");
}

void mostrarVariaveis(int qntd_treino, int *arrayX, int *arrayY)
{
    int i;
    for(i=0; i<qntd_treino; i++){
        if(i==0){
            printf("x | y\n");
        }
        printf("%d | %d\n", arrayX[i], arrayY[i]);
    }
    system("pause");
}

int soma(int qntd_treino, int *num)
{
    int i, somaNum = 0;
    for(i=0;i<qntd_treino;i++){
        somaNum += num[i];
    }
    return somaNum;
}

float media(int qntd_treino, int soma_num)
{
    float media_num;
    media_num = (float)soma_num/qntd_treino;

    return media_num;
}

void desvio(int qntd_treino, float media_num, int *array_num, float *desvio_num){
    for(int i = 0;i<qntd_treino;i++){
        desvio_num[i] = array_num[i] - media_num;
    }
}

void mostrarDesvio(int qntd_treino, float *arrayX_media, float *arrayY_media){
    system("cls");
    for(int i=0; i<qntd_treino; i++){
        if(i==0){
            printf("DESVIOS\n\n");
            printf("  x   |   y\n");
        }
        if(arrayX_media[i] < 0 && arrayY_media[i] < 0){
            printf("%.2f | %.2f\n", arrayX_media[i], arrayY_media[i]);
        }else if(arrayX_media[i] < 0 && arrayY_media[i] > 0){
            printf("%.2f | %.2f\n", arrayX_media[i], arrayY_media[i]);
        }else if(arrayX_media[i] > 0 && arrayY_media[i] < 0){
            printf("%.2f |  %.2f\n", arrayX_media[i], arrayY_media[i]);
        }else{
            printf("%.2f  | %.2f\n", arrayX_media[i], arrayY_media[i]);
        }
    }
    system("pause");
}

void varianca(int qntd_treino, float *desvio_num, float *varianca_num){
    for(int i = 0;i<qntd_treino;i++){
        varianca_num[i] = pow(desvio_num[i], 2);
    }
}

void mostrarVarianca(int qntd_treino, float *arrayX_varianca){
    system("cls");
    for(int i=0; i<qntd_treino; i++){
        if(i==0){
            printf("Varianca\n\n");
            printf(" x\n");
        }
        printf("%.2f\n", arrayX_varianca[i]);

    }
    system("pause");
}

void coVarianca(int qntd_treino, float *array_desvioX, float *array_desvioY, float *coVarianca_num){
    for(int i = 0; i<qntd_treino; i++){
        coVarianca_num[i] = array_desvioX[i]*array_desvioY[i];
    }
}

void mostrarCoVarianca(int qntd_treino, float *array_coVarianca){
    system("cls");
    for(int i=0; i<qntd_treino; i++){
        if(i==0){
            printf("Covarianca\n\n");
        }
        printf("%.2f\n", array_coVarianca[i]);
    }
    system("pause");
}
