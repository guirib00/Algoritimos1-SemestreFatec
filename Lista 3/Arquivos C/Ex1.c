#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int inicioMenu();
int fimMenu();
void pauseClear();
void sequencia1(int i, int k, int sequencia);
void sequencia2(int i, int k, int sequencia);

int main()
{
    int cd_inicial, k, i, sequencia;
    cd_inicial = inicioMenu();
    setlocale(LC_ALL, "");

    while(cd_inicial == 1){
    system("cls");

    printf("Digite a quantidade de termos: ");
    scanf("%d", &k);

    pauseClear();

    sequencia1(i, k, sequencia);

    sequencia2(i, k, sequencia);

    pauseClear();

    cd_inicial = fimMenu();
    }

    return 0;
}

int inicioMenu()
{
    int cd_inicial;
    do{
        system("cls");

        printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
        scanf("%d", &cd_inicial);

    }while(cd_inicial != 1 && cd_inicial != 2);

    return cd_inicial;
}
int fimMenu()
{
    int cd_inicial;
    do{
        system("cls");

        printf("Iniciar novamente - 1\nSair - 2\nDigite: ");
        scanf("%d", &cd_inicial);

    }while(cd_inicial != 1 && cd_inicial != 2);

    return cd_inicial;
}

void pauseClear()
{
    system("pause");
    system("cls");
}

void sequencia1(int i, int k, int sequencia)
{
    for(i=1; i<=k; i++){
        if(i==1){
            sequencia = 3;
        }
        if(i<k)
            printf("%d, ", sequencia);
        else
            printf("%d\n", sequencia);
        sequencia += 3;
    }
}

void sequencia2(int i, int k, int sequencia)
{
    for(i=1; i<=k; i++){
        if(i==1){
            sequencia = 4;
        }
        if(i<k)
            printf("1/%d, ", sequencia);
        else
            printf("1/%d\n\n", sequencia);
        sequencia += 4;
    }
}
