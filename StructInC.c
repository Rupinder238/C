#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


struct car{
    char carName[80];
    int modelNumber;
    double price;
    struct car *nextPtr;
};

typedef struct car Car;
typedef struct car *CarPtr;


void menu();
CarPtr makeItem(char carName[80], int modelNumber, double price);
CarPtr addItem(CarPtr sPtr, char carName[80], int modelNumber, double price);
void printList(CarPtr);
CarPtr removeItem(CarPtr sPtr, int modelNumber);
void viewItem(CarPtr sptr, int key);

int main()
{
  CarPtr startPtr;
    char carName[80];
    int modelNumber; 
    double price;
    int choice;
    startPtr = NULL;
    
    menu();

    char a[2];
    fgets(a,2,stdin);
    choice = (int)strol(a,NULL);
  
    while (choice != 5){
      switch (choice){
        case 1: printf("\nEnter the car Name for Insertion: ");
		fgets(carName,80,stdin);
		printf("\nEnter the car Model for Insertion: ");

		char b[31];
    		fgets(b,31,stdin);
    		modelNumber = (int)strol(b,NULL);

                printf("\nEnter the car Price for Insertion: ");

		char c[31];
    		fgets(c,31,stdin);
    		price = strtod(c,NULL);

        	startPtr = addItem(startPtr, carName, modelNumber, price);
                printList(startPtr);
                printf("\n");
                break;

       case 2: printf("\nEnter Car model number for deletion : ");

                char d[31];
    		fgets(d,31,stdin);
    		modelNumber = atoi(d);

                startPtr = removeItem(startPtr, modelNumber);
                printList(startPtr);
                printf("\n");
                break;

        case 3: printf("\nEnter Car Number to View : ");

                char e[31];
    		fgets(e,31,stdin);
    		modelNumber = atoi(e);

                viewItem(startPtr, modelNumber);
                printf("\n");
                break;

        case 4: printList(startPtr);
                printf("\n");
                break;

        default: printf ("Invalid Option... Please Try Again \n");
                break;
      }
      menu();
      scanf("%d", &choice);    
    }
}

void menu () 
{
  printf ("\t1: Insert Car into Ordered List\n");
  printf ("\t2: Remove Car from List\n");
  printf ("\t3: View Car from List\n");
  printf ("\t4: Printing the Car List\n");
  printf ("\t5: Exit\n");
  printf ("\tEnter Choice: ");
} 

CarPtr makeCar (char carName[80], int modelNumber, double price) 
{
  CarPtr np = (CarPtr)malloc (sizeof (Car));
  strcpy(np->carName,carName);
  np->modelNumber=modelNumber;
  np->price=price;
  np->nextPtr = NULL;
  return np;
}


CarPtr addItem (CarPtr sPtr, char carName[80], int modelNumber, double price) 
{
  CarPtr newPtr, currPtr, prevPtr;
  newPtr = makeCar (carName, modelNumber, price);
  prevPtr = NULL;
  currPtr = sPtr;
  while (currPtr != NULL && modelNumber > currPtr->modelNumber)
  {
    prevPtr = currPtr;
    currPtr = currPtr->nextPtr;
  }
  
  if (prevPtr == NULL)
  {				// inserting at the start of the list
    newPtr->nextPtr = sPtr;
    sPtr = newPtr;		// start of list has now changed
  }
  else
     {
       newPtr->nextPtr = currPtr;
       prevPtr->nextPtr = newPtr;
     }

  return sPtr;
}

void printList (CarPtr sPtr) 
{
  if (sPtr == NULL)
  {
    printf ("\nThere are no Cars to be Printed\n");
  }
  else
     {
        printf ("The Cars in the List Are As Follows: \n");
        while (sPtr != NULL)
	  {
	    printf ("%s - ", sPtr->carName);
	    printf ("%d  - ", sPtr->modelNumber);
	    printf ("%lf  \n", sPtr->price);
	    sPtr = sPtr->nextPtr;
	  }
     }
}
void viewItem(CarPtr sptr, int key){
  CarPtr prevPtr, currPtr;
  prevPtr =NULL;
  currPtr = sptr;
  int position = 0;
  if(sptr = NULL){
	puts("the list is empty");
	return;
  }
  while(currPtr != NULL && key != currPtr->modelNumber){
	prevPtr = currPtr;
	currPtr = currPtr->nextPtr;
	position++;
  }
  if(currPtr == NULL){
	puts("Car not found");
  }
  else{
	printf("Car with model number %d is found at location %d\n",currPtr ->modelNumber, (position+1));
	printf("Car details:\n%s\t%d\t%lf\n",currPtr ->carName,currPtr ->modelNumber,currPtr ->price);
  }
}


CarPtr removeItem(CarPtr sPtr, int modelNumber)
{
   CarPtr prevPtr, currPtr, tempPtr;
   prevPtr = NULL;
   currPtr = sPtr;
   if (sPtr == NULL)
   {
      puts ("Car List is Empty...");
      return sPtr;
   }
   while(currPtr != NULL && modelNumber != currPtr->modelNumber)
   {
      prevPtr = currPtr;
      currPtr = currPtr->nextPtr;
   }
   if(currPtr == NULL)   // the item is not found
   {
       puts("Car was not found in the list \n");
   }
   else if(prevPtr == NULL)// item being removed is at start of list
     {
         tempPtr = sPtr;
         sPtr = sPtr->nextPtr;
         printf("Car with model number %d is now being deleted\n", tempPtr->modelNumber);
         free (tempPtr);
     } 
     else // item being deleted is within the list
       {
           tempPtr = currPtr;
           prevPtr->nextPtr = currPtr->nextPtr;
           printf("Car with model number %d is now being deleted\n", tempPtr->modelNumber);
           free (tempPtr);
       }
    return sPtr;
}


