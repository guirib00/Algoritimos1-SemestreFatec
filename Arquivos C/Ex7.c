#include "stdio.h"

void main()
{
float altura, peso_ideal;
char sexo;

printf("Digite o seu sexo\n'M' para mulher\n'H' para homem\nSexo: ");
sexo = getchar();

while(sexo!='M' && sexo!='m' && sexo!='H' && sexo!='h'){
    getchar();
    printf("\nLetra nao compativel!! \n\ndigite seu sexo novamente\n'M' para mulhere\n'H' para homem\nSexo:");
    sexo = getchar();
}

printf("\nDigite a sua altura: ");
scanf("%f", &altura);

if(sexo== 'M' || sexo== 'm'){
    peso_ideal= (62.1*altura)-44.7;
}
else if(sexo=='H' || sexo=='h'){
    peso_ideal= (72.7*altura)-58;
}

printf("\nO seu peso ideal e: %.2fKg", peso_ideal);
}
