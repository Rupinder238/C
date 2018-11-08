
// Using the & and * pointer operators.
#include <stdio.h>

int main( void )
{
   int x = 12; // a is an integer
   int *xPtr = &x; // xPtr is a pointer to an integer
   int **pPtr = &xPtr;
   
   printf( "address of x is  %p \nThe value of xPtr is %p", &x, xPtr );

   printf( "\nvalue of a is %d \nThe value of *xPtr is %d", x, *xPtr );

   printf( "\nShowing that * and & are complements of each other\n&*xPtr = %p \n*&xPtr = %p\n", &*xPtr, *&xPtr );
   
   printf( "The value of pPtr is %p \n", pPtr );
   printf( "The value of &pPtr is %p \n", &pPtr );
   printf( "The value of *pPtr is %p \n", *pPtr );
   printf( "The value of **pPtr is %d \n", **pPtr );
} // end main















