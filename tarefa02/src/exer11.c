#include <stdio.h>
 
int main ()
{
  int x;
  x = !( 1 || 0 );   // 1 ou 0 temos como resultado 1, invertendo temos x=0
  printf ("x=%d\n",x);      
  x = !( 0 || 1 && 0 ); // 1 e 0 temos 0, 0 ou 0 temos 0, invertendo temos x=1
  printf ("x=%d\n",x);
  x = !( 0 || 1 && 1 ); // 1 e 1 temos 1, 0 ou 1 temos 1, invertendo temos x=0
  printf ("x=%d\n",x);     
  x = !( ( 0 || 1 ) && 1 ); // 0 ou 1 temos 1, 1 e 1 temos 1, invertendo temos x=0
  printf ("x=%d\n",x); 
return 0; 
}