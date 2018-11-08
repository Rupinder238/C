//basic array manupulation using c
#include <stdio.h>

#define SIZE 5
//#define N 3


int main (void){

/* simple example
 int numbers[SIZE];
 int i;
 for(i=0;i<SIZE;i++){
  printf("Enter the value at position %u",i);
  scanf("%d",&numbers[i]);
 }
 for(i=0;i<SIZE;i++){
  printf("%d \n", numbers[i]);
 } 
*/

/*
 int matrix1[N][N];
 size_t row, col;
 for(row=0;row<N;row++){
  for(col=0;col<N;col++){
      matrix1[row][col]=0;
  }
 }
 
 puts("Printing the matrix");

  for(row=0;row<N;row++){
  for(col=0;col<N;col++){
      printf("%d",matrix1[row][col]);
  }
puts("   ");
 }
 puts(" ");
*/
 int numbers[ SIZE ] = {0};
 printf("1: address of aray is %n",&numbers[0]);
 printf("2: address of aray is %n",numbers);


}

































