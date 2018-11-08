/*
(Binary Tree Search)
 Write function binaryTreeSearch that attempts to locate a specified
value in a binary search tree. The function should take as arguments a pointer to the root node of
the binary tree and a search key to be located. If the node containing the search key is found, the
function should return a pointer to that node; otherwise, the function should return a NULL pointer.
*/
//ANS:


/* Exercise Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /* TreeNode structure definition */
struct TreeNode
{
  struct TreeNode *leftPtr;	/* pointer to left subtree */
  char data[50];			/* node data */
  struct TreeNode *rightPtr;	/* pointer to right subtree */
};				/* end struct TreeNode */

typedef struct TreeNode TreeNode;
typedef TreeNode *TreeNodePtr;

 /* function prototypes */
void insertNode (TreeNodePtr * treePtr, char value);
TreeNodePtr binaryTreeSearch (TreeNodePtr treePtr, const int key);

int main (void)
{
  int i;			/* loop counter */
  char item[40];			/* random value to insert in tree */
  char searchKey[50];		/* value to search for */
  TreeNodePtr rootPtr = NULL;	/* points to the tree root */
  TreeNodePtr searchResultPtr;	/* pointer to search result */

  srand (time (NULL));		/* randomize */
  printf ("Please fill the list first\n");

  /* insert random values between 1 and 20 in the tree */
  for (i = 1; i <= 10; i++)
    {
      printf("\nPlease enter the word you want to insert: ");
      scanf("%s",item);
      insertNode (&rootPtr, item);
    }				/* end for */

  /* prompt user and read integer search key */
  printf ("\n\nEnter an string to search for: ");
  scanf ("%s", &searchKey);

  searchResultPtr = binaryTreeSearch (rootPtr, searchKey);

  /* if searchKey not found */
  if (searchResultPtr == NULL)
    {
      printf ("\n%d was not found in the tree.\n\n", searchKey);
    }				/* end if */
  else
    {				/* if key found */
      printf ("\n%d was found in the tree.\n\n", searchResultPtr->data);
    }				/* end else */

  getchar();
  getchar();
  return 0;			/* indicate successful termination */
}				/* end main */

 /* insert a node into the tree */
void insertNode (TreeNodePtr * treePtr, char value)
{
  /* if treePtr is NULL */
  if (*treePtr == NULL)
    {
      /* dynamically allocate memory */
      *treePtr = malloc (sizeof (TreeNode));

      /* if memory was allocated, insert node */
      if (*treePtr != NULL)
	{
	  (*treePtr)->data = value;
	  (*treePtr)->leftPtr = NULL;
	  (*treePtr)->rightPtr = NULL;
	}			/* end if */
      else
	{
	  printf ("%d not inserted. No memory available.\n", value);
	}			/* end else */
    }				/* end if */
  else
    {				/* recursively call insertNode */
      /* insert node in left subtree */
      if (value < (*treePtr)->data)
	{
	  insertNode (&((*treePtr)->leftPtr), value);
	}			/* end if */
      else
	{
	  /* insert node in right subtree */
	  if (value > (*treePtr)->data)
	    {
	      insertNode (&((*treePtr)->rightPtr), value);
	    }			/* end if */
	  else
	    {			/* duplicate value */
	      printf ("dup");
	    }			/* end else */
	}			/* end else */
    }				/* end else */
}				/* end function insertNode */

 /* search for key in tree */
TreeNodePtr binaryTreeSearch (TreeNodePtr treePtr, const int key)
{
  /* traverse the tree inOrder */
  if (treePtr == NULL)
    {
      return NULL;		/* key not found */
    }				/* end if */
  else if (treePtr->data == key)
    {
      return treePtr;		/* key found */
    }				/* end else if */
  else if (key < treePtr->data)
    {
      return binaryTreeSearch (treePtr->leftPtr, key);	/* search left */
    }				/* end else if */
  else // (key > treePtr->data)
    {
      return binaryTreeSearch (treePtr->rightPtr, key);	/*search right */
    }				/* end else if */
}				/* end function binaryTreeSearch */

/*
Test Data:

The numbers being placed in the tree are:
   18 9 7 2 13 2dup 10 1 19 2dup

Enter an integer to search for: 8
   8 was not found in the tree.
*/
