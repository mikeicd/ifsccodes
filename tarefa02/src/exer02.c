#include <stdio.h>

int main()
{
	int x,y;

  printf("Digite o 1º número: ");
  scanf("%d",&x);
  printf("Digite o 2º número: ");
  scanf("%d",&y);

	if (x==y) {
	printf("Os números são iguais!\n");
	} else {
	printf("Os números são diferentes e a média deles é: %.2f\n",((x+y)/2.0));
	}
	
return 0;
}