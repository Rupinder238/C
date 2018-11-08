#include<stdio.h>
#include<stdlib.h>
#define N 3

void get_matrix(int matrix1[][N], int matrix2[][N]);
void sum_matrix(int matrix1[][N], int matrix2[][N], int result[][N]);
void print_matrix(int result[][N]);


int main() 
{
   int matrix1[N][N]={{0},{0},{0}};
   int matrix2[N][N]={{0},{0},{0}};
   int result[N][N]={{0},{0},{0}};

   get_matrix(matrix1, matrix2);
   sum_matrix(matrix1, matrix2, result);
   print_matrix(result);
   return 0;

}

void get_matrix(int matrix1[][N], int matrix2[][N])
{
    // Load matrix-1
   size_t row,col;
   puts("Now Loading Matrix-1");
   for(row=0; row < N; row++)
   {
      for(col=0; col < N; col++)
      {
         printf("Enter the value at row %Zu col %Zu: ", row, col);
         scanf("%d", &matrix1[row][col]);
      }
   }

   // Load matrix-2
   puts("Now Loading Matrix-2");
   for(row=0; row < N; row++)
   {
      for(col=0; col < N; col++)
      {
         printf("Enter the value at row %Zu col %Zu: ", row, col);
         scanf("%d", &matrix2[row][col]);
      }
   }
}

void sum_matrix(int matrix1[][N], int matrix2[][N], int result[][N])
{
  size_t row,col;
  for(row=0; row < N; row++)
   {
      for(col=0; col < N; col++)
      {
         result[row][col] = matrix1[row][col] + matrix2[row][col];
      }
   }
}

void print_matrix(int result[][N])
{
   size_t row,col;
   puts("");
   for(row=0; row < N; row++)
   {
      for(col=0; col < N; col++)
      {
         printf("%d ", result[row][col]);
      }
      puts("");
   }
    
   puts("");
}




