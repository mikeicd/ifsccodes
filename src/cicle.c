#include <stdio.h>

int main()
{
	int alpha,beta,gama,x,y,z;

  printf("Entre com o valor de Alpha:");
  scanf("%d",&alpha);
	printf("Entre com o valor de Beta:");
  scanf("%d",&beta);
	printf("Entre com o valor de Gama:");
  scanf("%d",&gama);

	printf("Alpha: %d, Beta: %d, Gama: %d \n",alpha,beta,gama);
	x=alpha,y=beta,z=gama; //Guardando os valores em novas variaveis para fazer a troca em seguida...
	beta=x,gama=y,alpha=z;
	
	printf("Trocando os valores das variaveis...\nAlpha: %d, Beta: %d, Gama: %d \n",alpha,beta,gama);

return 0;
}