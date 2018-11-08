//8.8 converting string to floating point for calculation
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char x[100];
    char y[100];
    char z[100];
    
    

    printf("Enter first value:\n");

//taking data from the user 
    fgets(x,100,stdin);
    
    printf("\nEnter the Second value:\n");
    fgets(y,100,stdin);

    printf("\nEnter the third value:\n");
    fgets(z,100,stdin);

    char *a = x;
    char *b = y;
    char *c = z;

//converting to float and displaying 
//converting to double and adding and displaying

    printf("First value in float is: %f\n",strtof(a,NULL));
    printf("Second value in float is: %f\n",strtof(b,NULL));
    printf("Third value in float is: %f\n",strtof(c,NULL));

    double temp1 = strtod(a,NULL);
    double temp2 = strtod(b, NULL);
    double temp3 = strtod(c, NULL);
    double sum = temp1+temp2+temp3;
    printf("\nNumber in double:%f\n", sum);


}
