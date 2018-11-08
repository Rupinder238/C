#include <stdio.h>
#include <stdlib.h>

void add(int num1, int num2);

int subtract(int num1, int num2);

int main (void)
{
 int i,x,y,z=0;
 do{
    printf("1: ADD\n2: Subtract\n3: Divide\n4: Multiply\n5: Exit\n");
    scanf("%d",&i);
    switch(i)
    {
     case 1:
            printf("Enter the two values");
     	    scanf("%d,%d",&x,&y);
	    add(x,y);
            break;
     case 2:
	    printf("Enter the two values");
     	    scanf("%d,%d",&x,&y);
	    z = subtract(x,y);
	    printf("The result is %d \n", z);
            break;
     case 3:
	    printf("Enter the two values");
     	    scanf("%d,%d",&x,&y);
	    z = x/y;
	    printf("The result is %d \n", z);
            break;
     case 4:
	    printf("Enter the two values");
     	    scanf("%d,%d",&x,&y);
	    z = x*y;
	    printf("The result is %d \n", z);
            break;
     case 5: exit(0);
            break;
     default: 
            printf("Invalid option please try again");
            break;
     }
     
    
   }while(1);

}

// function defination which will have header and body

void add(int num1, int num2){
 int z=0;
 z = num1+num2;
 printf("The result is %d \n", z);
}

int subtract(int num1, int num2){
 return num1-num2; 
}
