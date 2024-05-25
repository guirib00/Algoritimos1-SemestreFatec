#include <stdio.h>
#include <stdbool.h>

int A[20], B[20], C[40], D[40], contador_C = 0, contador_D = 0;
bool num_multiplo5 = false, num_multiplo11 = false;
void Armazena_AB(int k);
int Menor_Multiplo5();
int Media_multiplo11();


int main(){
    int k, menor_multiplo_de_5, media_multiplo_de_11;

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    Armazena_AB(k);
    menor_multiplo_de_5 = Menor_Multiplo5();

    if(num_multiplo5 == false){
        printf("Nao ha multiplos de 5 em D\n");
    }else if(num_multiplo5 == true){
        printf("O menor multiplo de 5 em D eh: %d\n", menor_multiplo_de_5);
    }

    media_multiplo_de_11 = Media_multiplo11();

    if(num_multiplo11 == false){
        printf("Nao ha multiplos de 11 em C\n");
    }else if(num_multiplo11 == true){
        printf("A media dos multiplos de 11 em C eh: %d\n", media_multiplo_de_11);
    }

    return 0;
}

void Armazena_AB(int k){
    int i;
    for (i = 0; i<k; i++){
        printf("Digite o %do numero do vetor A: ", ++i);
        i--;
        scanf("%d", &A[i]);
    }
    for (i = 0; i<k; i++){
        printf("Digite o %do numero do vetor B: ", ++i);
        i--;
        scanf("%d", &B[i]);
    }
    for(i=0; i<k; i++){
        if (A[i]%2 != 0){
            C[contador_C] = A[i];
            contador_C++;
        }
        else if(A[i]%2 == 0){
            D[contador_D] = A[i];
            contador_D++;
        }
    }
    for(i=0; i<k; i++){
        if (B[i]%2 != 0){
            C[contador_C] = B[i];
            contador_C++;
        }
        else if(B[i]%2 == 0){
            D[contador_D] = B[i];
            contador_D++;
        }
    }       
}

int Menor_Multiplo5(){
    int i, menor_multiplo = -1;
    if(contador_D != 0){
        for(i=0; i<contador_D; i++){
            if(D[i]%5 == 0){
                num_multiplo5 = true;
                if(menor_multiplo == -1 || D[i] < menor_multiplo){
                    menor_multiplo = D[i];
                }
            }
        }
    }

    return menor_multiplo;
}

int Media_multiplo11(){
    int i, soma = 0, media=0, contador_multiplos11 = 0;
    if(contador_C != 0){
        for(i=0; i<contador_C; i++){
            if(C[i]%11 == 0){
                num_multiplo11 = true;
                soma += C[i];
                contador_multiplos11++;
            }
        }
        if(contador_multiplos11 != 0){
            media = soma/contador_multiplos11;
        }
    }

    return media;
}