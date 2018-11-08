#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//this program let you create a array of elements and after that you can insert any number in the array and it will automatically rearrange the array to fit the number in the list 
void main()
{
    int array[100];
    int i, j, n, m, temp, key, pos;
 
    printf("Enter how many elements \n");
    scanf("%d", &n);
    printf("Enter the elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements are \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }


    printf("Enter the element to be inserted \n");
    scanf("%d", &key);
    srand ( time(NULL) );
    int x =  rand() %100;

    for (i = 0; i < n; i++)
    {
        if (x < array[i])
        {
            pos = i;
            break;
        }
        if (x > array[n-1])
        { 
            pos = n;
            break;
        }
    }
    if (pos != n)
    {
        m = n - pos + 1 ;
        for (i = 0; i <= m; i++)
        {
            array[n - i + 2] = array[n - i + 1] ;
        }
    }
    array[pos] = key;
    printf("Final list is \n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d\n", array[i]);
    }
}
