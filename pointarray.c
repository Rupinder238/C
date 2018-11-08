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


