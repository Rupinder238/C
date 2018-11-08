#include <stdio.h>


int factorial (unsigned int number);
int power (int base, int exp);
int multiply(int x, int y);
int divide (int numerator, int denominator);
int findSum(int n);
int gcd(int n1, int n2);

int main()
{
int choice=0;
  do{
    int result = 0;
    int num=0,x=0,y=0;
    puts("1: Factorial");
    puts("2: Power");
    puts("3: Multiply");
    puts("4: divide");
    puts("5: findsum");
    puts("6: GCD");
    puts("7: Exit");
    printf("Enter the number what you want to calculate");
    scanf("%d", &choice);
    switch(choice)
	     {     
	       case 1 :
                       puts("Enter the number for factorial");
                       scanf("%d", &x);
		       result = factorial(x);
                       printf("The answer is %d",result);
                       break;

	       case 2:
                       puts("Enter the number and power");
                       scanf("%d%d", &x,&y);
		       result = power(x,y);
                       printf("The answer is %d",result);
                       break;
	       case 3:
                       puts("Enter the numbers to multiply");
                       scanf("%d%d", &x,&y);
		       result = multiply(x,y);
                       printf("The answer is %d",result);
                       break;
               case 4:
                       puts("Enter the numbers to divide");
                       scanf("%d%d", &x,&y);
		       result = divide(x,y);
                       printf("The answer is %d",result);
                       break;
               case 5:
                       puts("Enter the numbers to find sum");
                       scanf("%d%d", &x,&y);
		       result = findSum(583);
                       printf("The answer is %d",result);
                       break;
               case 6:
                       puts("Enter the numbers for GCD");
                       scanf("%d%d", &x,&y);
		       result = gcd(5,0);
                       printf("The answer is %d",result);
                       break;
               case 7:
                       puts ("Goodbye... Exiting the program now");
                       break;
               default:
                       puts("Invalid user choice... please try again");
                       break;
               }
      }while(choice !=7);
    

}


int factorial (unsigned int n)
{
  if (n<=1){
   return 1;
}
    // return
  else{
  return n*factorial(n-1);
}
    // return 
}



int power (int base, int exp)
{
  if (exp ==0){
  return 1;
  }
    // return 
  else if (exp ==1){
  return base;
  }
      // return 
    else{
    return base * power (base, exp -1);
    }
       // return 
}


// Multiply by using a series of additions
int multiply(int x, int y)
{
  if (y==0){
  return 0;
}
     // return 
  else{
  return x+multiply(x,y-1);
}
     // return   
}




// Divide by using a series of subtractions

int divide (int numerator, int denominator)
{
   if(numerator <denominator){
   return 0;
}
     // return 
   else{
   return 1+ divide((numerator - denominator), denominator);
}
     // return 
}

int findSum(int n)
{
  int rem; 
  if(n==0){
  return 0;
} 
     // return  
  else{
  return (n%10)+ findSum(n/10);
}
     // return  
} 

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else 
       return n1;
}


