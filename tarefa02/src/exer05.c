#include <stdio.h>

int main()
{
	int x;
  
  printf("Informe a temperatura da agua: ");
  scanf("%d",&x);
    
  if (x<25)  {
    printf("Frio.\n");
  } else if (x>30)  {
    printf("Quente.\n");
  } else {
    printf("Morna.\n");
  }	
return 0;
}