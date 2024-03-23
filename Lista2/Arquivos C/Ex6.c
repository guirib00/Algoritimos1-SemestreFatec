#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    float h_degrau, h_total;
    int qntd_degraus, cd_inicial;
    char medida_degrau[15], medida_subida[15];


    printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
    scanf("%d", &cd_inicial);



while(cd_inicial==1){

    do{
        printf("\n\nDigite o sistema de metrica que deseja usar para a altura do degrau\nmetros\ncentimetros\nDigite: ");
        scanf("%s", &medida_degrau);

        if(strcmp(medida_degrau, "metros") != 0 && strcmp(medida_degrau, "centimetros") !=0 ){
            printf("\nMetrica invalida\nmetros\ncentimetros\nDigite novamente: ");
            scanf("%s", &medida_degrau);
        }
    }while (strcmp(medida_degrau, "metros") != 0 && strcmp(medida_degrau, "centimetros") !=0 );


    printf("\nDigite a altura do degrau: ");
    scanf("%f", &h_degrau);

    do{
        printf("\nDigite o sistema de metrica que deseja usar para a altura que deseja subir\nmetros\ncentimetros\nDigite: ");
        scanf("%s", &medida_subida);

        if(strcmp(medida_subida, "metros") != 0 && strcmp(medida_subida, "centimetros" ) != 0){
            printf("\nMetrica invalida\nmetros\ncentimetros\nDigite novamente: ");
            scanf("%s", &medida_subida);
        }
    }while(strcmp(medida_subida, "metros") != 0 && strcmp(medida_subida, "centimetros" ) != 0);


    printf("\nDigite a altura que deseja subir: ");
    scanf("%f", &h_total);

    if(strcmp(medida_subida, "metros") == 0 && strcmp(medida_degrau, "centimetros") == 0){
        h_total = h_total*100;
    }else if(strcmp(medida_subida, "centimetros") == 0 && strcmp(medida_degrau, "metros") == 0){
        h_degrau = h_degrau*100;
    }

    qntd_degraus = h_total/h_degrau;

    printf("\nVoce subira %d degraus para chegar ate essa altura\n", qntd_degraus);


    system("pause");
    system("cls");

    printf("Iniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);

}
    return 0;
}
