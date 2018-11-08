
// An example with interactive menu
// how to use stack as linked list

#define _CRT_SECURE_NO_WARNINGS  // to disabe warning about unsafe scanf()
#include <stdio.h>
#include <Curses.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*top = NULL;

void push(int);
void pop();
void display();

void main()
{
   int choice, value;
   printf("\n:: Stack using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 push(value);
		 break;
	 case 2: pop(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void push(int value)
{
   
   printf("\nInsertion is Success!!!\n");
}
void pop()
{
      printf("\nDeleted element is Success!!!\n");
   
}
void display()
{
      printf("-->NULL\n");
   
}    
    
