#include "stdio.h"

int main()
{
float n1, n2, n3, n4;
float media;

printf("Digite a primeira nota do aluno: ");
scanf("%f", &n1);
while (n1<0 && n1<=10){
    printf("Voce digitou uma nota invalida, digite a primeira nota novamente: ");
    scanf("%f", &n1);
}

printf("Digite a segunda nota do aluno: ");
scanf("%f", &n2);
while(n2<0 && n2<=10){
    printf("Voce digitou uma nota invalida, digite a segunda nota novamente: ");
    scanf("%f", &n2);
}

printf("Digite a terceira nota do aluno: ");
scanf("%f", &n3);
while(n3<0 && n3<=10){
    printf("Voce digitou uma nota invalida, digite a terceira nota novamente: ");
    scanf("%f", &n3);
}

printf("Digite a quarta nota do aluno: ");
scanf("%f", &n4);
while(n4<0 && n4<=10){
    printf("Voce digitou uma nota invalida, digite a quarta nota novamente: ");
    scanf("%f", &n4);
}

media = (n1+n2+n3+n4)/4;

if(media >=6 ){
    printf("Aluno aprovado");
}else{
printf("Aluno reprovado");
}


return 0;
}
