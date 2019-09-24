#include <stdio.h>

int main()
{
	int q,w,e,r;

  printf("Digite o 1º número: ");
  scanf("%d",&q);
  printf("Digite o 2º número: ");
  scanf("%d",&w);
  printf("Digite o 3º número: ");
  scanf("%d",&e);
  printf("Digite o 4º número: ");
  scanf("%d",&r);

	if ((q+w)<=(e+r)) {
	printf("A soma do 1° e 2° numero é menor ou igual que a soma do 3º e 4º!\n");
	} else {
	printf("A soma do 1° e 2° numero é maior que a soma do 3º e 4º!\n");
	}
	
return 0;
}