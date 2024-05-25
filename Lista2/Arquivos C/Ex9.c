#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inicioMenu();
char verificacaoSexo();
void pauseClear();
int verificacaoIdade();
float conversaoSalario(char sexo_letra, int idade);
char* conversaoSexo(char sexo_letra);
int fimMenu();

int main()
{
    int cd_inicial, idade;
    float salario_fixo, salario_final;
    char sexo_letra;

    cd_inicial = inicioMenu();

    while(cd_inicial==1){
        system("cls");

        sexo_letra = verificacaoSexo();

        pauseClear();

        idade = verificacaoIdade();

        pauseClear();

        salario_final = conversaoSalario(sexo_letra, idade);

        pauseClear();

        printf("Sexo: %s\nIdade: %d\nSalario: %.2f\n\n", conversaoSexo(sexo_letra), idade, salario_final);

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
char verificacaoSexo(){
    char sexo_letra;

    do{
        system("cls");

        printf("**Sexo***\nMasculino - M\nFeminino - F\nDigite: ");
        scanf(" %c", &sexo_letra);
    }while(sexo_letra != 'F' && sexo_letra != 'M');

    return sexo_letra;
}

void pauseClear()
{
    system("pause");
    system("cls");
}

int verificacaoIdade()
{
    int idade;
    do{
        system("cls");

        printf("Digite a idade: ");
        scanf("%d", &idade);
    }while(idade<0);

    return idade;
}

float verificacaoSalarioFixo()
{
    float salario_fixo;

    do{
        system("cls");

        printf("Digite o salario: ");
        scanf("%f", &salario_fixo);
    }while(salario_fixo<0);

    return salario_fixo;
}

float conversaoSalario(char sexo_letra, int idade)
{
    float salario_final, salario_fixo;

    salario_fixo = verificacaoSalarioFixo();

    switch (sexo_letra){
            case 'M':
                if(idade>=30)
                    salario_final = salario_fixo + 200;
                else
                    salario_final = salario_fixo + 120;
            break;

            case 'F':
                if(idade>=30)
                    salario_final = salario_fixo + 220;
                else
                    salario_final = salario_fixo + 130;
                break;
    }
    return salario_final;
}

char* conversaoSexo(char sexo_letra)
{
    if(sexo_letra == 'M')
        return "Masculino";
    else
        return "Feminino";
}
