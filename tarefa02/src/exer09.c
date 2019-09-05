#include <stdio.h>

int main()
{
	float x;
  int z,y;
  z=1;
  while (z!=0)
  {
    printf("Informe o salário: ");
    scanf("%f",&x); //Salario

    printf("1 - CAT A.\n");
    printf("2 - CAT B.\n");
    printf("3 - CAT C.\n");
    printf("0 - Para sair.\n");
    printf("Selecione uma das categoria acima:");
    scanf("%d",&y); //Opção da Categoria

    switch (y)
    {
    case 1:
      printf("O salario reajustado para CAT A é: %f\n",(x+(x*0.10)));
    break;
    
    case 2:
      printf("O salario reajustado para CAT B é: %f\n",(x+(x*0.15)));
    break;
    
    case 3:
      printf("O salario reajustado para CAT C é: %f\n",(x+(x*0.20)));
     break;

    case 0:
      printf("Saindo..\n");
      z=0;
    break;

    default:
      printf("Opção não exite.\n");
    break;
    }
  }    
return 0;
}