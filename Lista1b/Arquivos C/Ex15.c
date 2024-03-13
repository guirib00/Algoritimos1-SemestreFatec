#include "stdio.h"


void main(){
int num_indentificacao;
float nota1, nota2, nota3, media_aproveitamento, media_exercicios;
char conceito;

printf("Digite o numero de indentificacao do aluno: ");
scanf("%d", &num_indentificacao);

do{
    printf("Digite a primeira nota desse aluno: ");
    scanf("%f", &nota1);
}while(nota1<0);

do{
    printf("Digite a segunda nota desse aluno: ");
    scanf("%f", &nota2);
}while(nota2<0);

do{
    printf("Digite a terceira nota desse aluno: ");
    scanf("%f", &nota3);
}while(nota3<0);

media_exercicios= (nota1+nota2+nota3)/3;
media_aproveitamento= (nota1+nota2*2+nota3*3+media_exercicios)/7;

if(media_aproveitamento>=9){
    conceito = 'A';
}else if(media_aproveitamento>=7.5 && media_aproveitamento<9){
    conceito = 'B';
}else if(media_aproveitamento>=6 && media_aproveitamento<7.5){
    conceito = 'C';
}else if(media_aproveitamento>=4 && media_aproveitamento<6){
    conceito = 'D';
}else if(media_aproveitamento<4){
    conceito = 'E';
}
if(conceito == 'A' || conceito == 'B' || conceito == 'C')
    printf("O aluno %d teve como notas: \nNota1: %.1f\nNota2: %.1f\nNota3: %.1f\nMedia de aproveitamento: %.1f\nConceito: %c\nO aluno foi APROVADO.", num_indentificacao, nota1, nota2, nota3, media_aproveitamento, conceito);
else if(conceito == 'D' || conceito == 'E')
    printf("O aluno %d teve como notas: \nNota1: %.1f\nNota2: %.1f\nNota3: %.1f\nMedia de aproveitamento: %.1f\nConceito: %c\nO aluno foi REPROVADO.", num_indentificacao, nota1, nota2, nota3, media_aproveitamento, conceito);
}
