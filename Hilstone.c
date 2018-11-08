#include <stdio.h>
int main (void)
{
 int num;
 printf("Enter the number");
 scanf("%d", &num);
 
 while(num!=1){
  if(num%2 == 0)
  {
   num = num/2;
   printf("%d", num);
  }
  else
  {
   num = (num*3)+1;
   printf("%d",num);
  }
 }
}
