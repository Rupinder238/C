#include <stdio.h>
int main (void)
{
 float hours[3], amount[3];
 int cars[3];
 

 for(int i=0;i<3;i++){
 printf("Enter the car number please\n");
 scanf("%d", &cars[i]);
 if(cars[i] ==i+1)
  printf("Enter the number of hours you parked your car\n");
  scanf("%f",&hours[i]);
  if(hours[i]<=3.0){
   amount[i] = 2.0;
  }
  else if(hours[i]>3.0&& hours[i]<=24.0){
   float hour = hours[i]-3.0;
   amount[i] = (hour*0.5)+2.0;
   if(amount[i]>10.0){
    amount[i] = 10.0;
   }
  }
  else{
  printf("Invalid number\n");
  }
 }
 printf("Car          Hours          Charge\n");
 for(int i=0;i<3;i++){
  printf("%d            %.2f           %.2f\n",(i+1),hours[i],amount[i]);
 }
}
