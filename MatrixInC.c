#include<stdio.h>
#define R 4
#define C 5

//declaring the methods

void get_matrix(int sales[][C]);
void sum_matrix(int sales[][C], int result[][C]);

//calling the methods and passing the arrays

int main() 
{

   int sales[R][C]={{0},{0},{0},{0}};
   int result[R][C]={{0},{0},{0},{0}};

   
   get_matrix(sales);
   sum_matrix(sales,result);
   return 0;

}

//get_matrix is getting the input from the user.

void get_matrix(int sales[][C])
{
   size_t row,col;
   
   puts("Now Loading Matrix-1");
   for(row=0; row < R; row++)
   {
      for(col=0; col < C; col++)
      {
         printf("Enter for SalesPerson %Zu Product %Zu: ", (row+1), (col+1));
         scanf("%d", &sales[row][col]);
      }
   }
}


//sum_matrix is adding the row and columns and printing side by side.

void sum_matrix(int sales[][C], int result[][C])
{
   int sum=0;
   size_t row,col;

//printing the column number the sum is for adding the rows and columns it rest sum after every row and column.

   printf("\t1\t2\t3\t4\t5\n\n");
   for (row=0; row < R; row++)
    {
	printf("%Zu",(row+1));
        for (col=0; col < C; col++)
        { 
            sum = sum + sales[row][col] ;
	    printf("\t%d ",sales[row][col]);
        }
        printf("\t%d\n", sum);
        puts("");
        sum = 0;
    }
    puts("");
    sum = 0;
    for (col=0; col < C; col++)
    {
        for (row=0; row < R; row++)
        {
            sum = sum + sales[row][col] ;
        }
        printf("\t%d", sum);
        sum = 0;
    }
}


