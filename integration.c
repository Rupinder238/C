#include <stdio.h>
#include <stdlib.h>

struct item {
    int data;
    struct item *nextPtr;
};

typedef struct item Item;
typedef struct item *ItemPtr;

void menu();
ItemPtr makeItem(int);
ItemPtr addItem(ItemPtr sPtr, int value);
void printList(ItemPtr);
ItemPtr removeItem(ItemPtr sPtr, int value);
void viewItem(ItemPtr sptr, int key);

int main()
{
    ItemPtr startPtr;

    int value, choice;
    startPtr = NULL;
    
    menu();
    scanf("%d", &choice);    
    while (choice != 5){
      switch (choice){
        case 1: printf("\nEnter Value for Item for Insertion: ");
                scanf("%d", &value);
        	     startPtr = addItem(startPtr, value);
                printList(startPtr);
                printf("\n");
                break;

        case 2: printf("\nEnter Item for deletion : ");
                scanf("%d", &value);
                startPtr = removeItem(startPtr, value);
                printList(startPtr);
                printf("\n");
                break;

        case 3: printf("\nEnter Item Number to View : ");
                scanf("%d", &value);
                viewItem(startPtr, value);
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
  printf ("\t1: Insert Item into Ordered List\n");
  printf ("\t2: Remove Item from List\n");
  printf ("\t3: View Item from List\n");
  printf ("\t4: Printing the List\n");
  printf ("\t5: Exit\n");
  printf ("\tEnter Choice: ");
} 
 

ItemPtr makeItem (int value) 
{
  ItemPtr np = (ItemPtr)malloc (sizeof (Item));
  np->data = value;
  np->nextPtr = NULL;
  return np;
}

ItemPtr addItem (ItemPtr sPtr, int value) 
{
  ItemPtr newPtr, currPtr, prevPtr;
  newPtr = makeItem (value);
  prevPtr = NULL;
  currPtr = sPtr;
  while (currPtr != NULL && value > currPtr->data)
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


void printList (ItemPtr sPtr) 
{
  if (sPtr == NULL)
  {
    printf ("\nThere are no Items to be Printed\n");
  }
  else
     {
        printf ("The Items in the List Are As Follows: \n");
        while (sPtr != NULL)
	  {
	    printf ("%d  ", sPtr->data);
	    sPtr = sPtr->nextPtr;
	  }
     }
}

ItemPtr removeItem(ItemPtr sPtr, int value)
{
   ItemPtr prevPtr, currPtr, tempPtr;
   prevPtr = NULL;
   currPtr = sPtr;
   if (sPtr == NULL)
   {
      puts ("List is Empty...");
      return sPtr;
   }
   while(currPtr != NULL && value != currPtr->data)
   {
      prevPtr = currPtr;
      currPtr = currPtr->nextPtr;
   }
   if(currPtr == NULL)   // the item is not found
   {
       puts("Item was not found in the list \n");
   }
   else if(prevPtr == NULL)// item being removed is at start of list
     {
         tempPtr = sPtr;
         sPtr = sPtr->nextPtr;
         printf("item %d is now being deleted", tempPtr->data);
         free (tempPtr);
     } 
     else // item being deleted is within the list
       {
           tempPtr = currPtr;
           prevPtr->nextPtr = currPtr->nextPtr;
           printf("item %d is now being deleted", tempPtr->data);
           free (tempPtr);
       }
    return sPtr;
}

//observation
void viewItem(ItemPtr sptr, int key){
  ItemPtr prevPtr, currPtr;
  prevPtr =NULL;
  currPtr = sptr;
  int position = 0;
  if(sptr = NULL){
	puts("the list is empty");
	return;
  }
  while(currPtr != NULL && key != currPtr->data){
	prevPtr = currPtr;
	currPtr = currPtr->nextPtr;
	position++;
  }
  if(currPtr == NULL){
	puts("item not found");
  }
  else{
	printf("%d is found at location %d",currPtr ->data, (position+1));
  }




}

