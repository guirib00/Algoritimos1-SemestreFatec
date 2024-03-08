#include "stdio.h"

int main()
{
int n1, antecessor, sucessor;

printf("Digite um numero: ");
scanf("%d", &n1);

antecessor = n1 - 1;
sucessor = n1 + 1;

printf("O numero digitado foi: %d\nO numero antecessor e: %d\nO sucessor e: %d", n1, antecessor, sucessor);

return 0;
}
