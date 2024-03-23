#include <stdio.h>

void main()
{
    float numbers[20], maior;
    int i, cd_inicial, cd, identificador;

    printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
    scanf("%d", &cd_inicial);



while(cd_inicial==1){
    i=0;
    while(i<20){
        printf("\nDigite um numero: ");
        scanf("\n%f", &numbers[i]);

        printf("\n\nQuer digitar mais um numeros - 1\nSair - 2\nDigite: ");
        scanf("%d", &cd);

        if(cd==1){
            i++;
        }else if(cd==2){
            i=20;
        }else{
            printf("\n\nQuer digitar mais um numeros - 1\nSair - 2\nDigite: ");
            scanf("%d", &cd);
        }
    }
maior = numbers[0];
    for(i=1; i<20; i++){

        if(numbers[i] > maior){
            maior = numbers[i];
            identificador=0;
        }else if(numbers[i] == maior){
        identificador=1;}
    }
    if(identificador==0)
        printf("O maior numero e: %f", maior);
    else if(identificador==1)
        printf("Os numeros sao iguais");

    printf("\n\nIniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);

}
}
