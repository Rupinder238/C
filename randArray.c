#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printArray(int stream[], int n)
{
    for (int i = 0; i < n; i++)
        return stream[i];

}
int selectKItems(int stream[], int n, int k)
{
    int i;  // index for elements in stream[]
 
    // reservoir[] is the output array. Initialize it with
    // first k elements from stream[]
    int reservoir[k];
    for (i = 0; i < k; i++)
        reservoir[i] = stream[i];
 
    // Use a different seed value so that we don't get
    // same result each time we run this program
    srand(time(NULL));
 
    // Iterate from the (k+1)th element to nth element
    for (; i < n; i++)
    {
        // Pick a random index from 0 to i.
        int j = rand() % (i+1);
 
        // If the randomly  picked index is smaller than k, then replace
        // the element present at the index with new element from stream
        if (j < k)
          reservoir[j] = stream[i];
    }
 
    return printArray(reservoir, k);
}


void main()

{
    int value;
    int a = 1;
    int vectorx[100];
    for (int i = 0; i < 12; i++)
    {
        vectorx[i]=a;
	a++;
    }
    int i, pos, element, found = 0;

    
    printf("Array elements are\n");
    printf("-------------------------------\n");
    for (i = 0; i < 12; i++)
    {
        printf("%d ", vectorx[i]);
    }

	
    
    element = selectKItems(vectorx, 12, 1);
    printf(" \n-------------------------------\n");
    printf("Item to Remove:  %d",element);
    printf("\n-------------------------------");

    for (i = 0; i < 12; i++)
    {
        if (vectorx[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1)
    {
    	for (i = pos; i <  12 - 1; i++)
        {
            vectorx[i] = vectorx[i + 1];
        }

    	printf("\nArray After Removal");
	printf(" \n-------------------------------\n");
        for (i = 0; i < 12 - 1; i++)
        {
            printf("%d ", vectorx[i]);
        }
    }


    else
    {
        printf("Element %d is not found in the vector\n", element);
    }

    int key,m;
    printf("\n-------------------------------");
    printf("\nEnter the element to be inserted");
    printf("\n-------------------------------\n");
    scanf("%d", &key);
    srand ( time(NULL) );
    int x =  rand() %12;
	
    for (i = 0; i < 12; i++)
    {
	if (x < vectorx[i])
	{
		pos = i;
		break;
	}
	if (x > vectorx[12-1])
	{ 
		pos = 12;
		break;
	}
    }
    if (pos != 12)
    {
	m = 12 - pos +2 ;
	for (i = 0; i < m; i++)
	{
	    vectorx[12 - i + 2] = vectorx[12 - i + 1] ;
	}
	vectorx[pos] = key;
    }
	
    printf("-------------------------------\n");
    printf("Final list is");
    printf("\n-------------------------------\n");
    for (i = 0; i < 12; i++)
    {
        printf("%d ", vectorx[i]);
    }
    printf("\n-------------------------------\n");
}
