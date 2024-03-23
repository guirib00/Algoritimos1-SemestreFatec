#include <stdio.h>
#include <stdlib.h>

int validarCPF(char cpf[12]){
    int i, x[11], somaX1, digito1, somaX2, digito2, validacao;

    somaX1=0;
    somaX2=0;

    for (i=0; i<11; i++){
        x[i] = cpf[i] - '0';
        if(i<9){
            somaX1 += (10-i)*x[i];
            somaX2 += (11-i)*x[i];
        }
    }
    digito1 = 11 - (somaX1%11);

    if(digito1 == 10 || digito1 == 11){
        digito1=0;
    }
    somaX2 += digito1*2;

    digito2 = 11 - (somaX2%11);

    if(digito2==10 || digito2 ==11){
        digito2 = 0;
    }
    if(digito1 == x[9] && digito2 == x[10]){
        validacao = 1;
    }else{
        validacao = 0;
    }
    return (validacao);
}

int main()
{
    char cpf[12];
    int cd_inicial, validacao;

    printf("Iniciar sistema - 1\nSair - 2\nDigite: ");
    scanf("%d", &cd_inicial);

    while(cd_inicial==1){

        printf("\nDigite seu CPF: ");
        scanf("%s", &cpf);

        validacao = validarCPF(cpf);

        if(validacao == 1){
            printf("\nO CPF e valido\n");
        }else{
            printf("\nO CPF e invalido\n");
        }

        system("pause");
        system("cls");

        printf("Iniciar novamente - 1\nSair - 2\nDigite:");
        scanf("%d", &cd_inicial);
    }
    return 0;
}
