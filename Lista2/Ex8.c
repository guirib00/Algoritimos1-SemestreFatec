#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cd_inicial;
    printf("Iniciar sistema - 1\nSair - Outros\nDigite: ");
    scanf("%d", &cd_inicial);


while(cd_inicial==1){
    system("cls");

    printf("Iniciar novamente - 1\nSair - 2\nDigite:");
    scanf("%d", &cd_inicial);
}

    return 0;
}
