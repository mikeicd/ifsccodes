#include <stdio.h>

int main()
{
	int x;

  printf("Digite um número para verificar se ele é par ou ímpar:");
  scanf("%d",&x);

	if ((x%2)==0) {
	printf("O número %d é par!\n",x);
	} else {
	printf("O número %d é ímpar!\n",x);
	}
	
return 0;
}