#include <stdio.h>

int main()
{

 float x1,y1,x2,y2,m,n;
 printf("Insira os valores do ponto P:\n");
 printf("X: ");
 scanf("%f",&x1);
 printf("Y: ");
 scanf("%f",&y1);
 printf("Insira os valores do ponto Q:\n");
 printf("X: ");
 scanf("%f",&x2);
 printf("Y: ");
 scanf("%f",&y2);
  
 m=(y2-y1)/(x2-x1); //Calcullo coef Angular
 n=((m*(-x1))+y1);	//Calculo coef Linear
 
 printf("Valor do coeficiente angular é:%.2f e o Valor do coefiente linear é: %.2f \n",m,n);

	return 0;
}