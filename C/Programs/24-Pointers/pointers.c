#include <stdio.h>
// int * f1 (void)
// {
//   int x= 10;
//   return (&x);
// } 
  
// int * f2 (void)
// {
//   int *px;
//   *px= 10;
//   return px;
// }
  
int * f3 (void)
{
  int *px;
  px = (int *) malloc (sizeof(int));
  *px= 10;
  return px;
}
int main(){
 // f1();
 // f2();
 f3();
 return 0;
}