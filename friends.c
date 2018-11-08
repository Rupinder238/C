
/*
Write a program that creates a structure called "Friends". You should house at least 3 different pieces / types of data in your structures. Furthermore, create an array of N friends, where N is a predefined constant, load the array and output the details of your friends. Include in your data items, a piece of data called "price", which is the price of a bus ticket that each friend would need to travel to your house. Your program should calculate the total cost for all friends travelling to your house.
*/ 

#include <string.h>
#include <stdlib.h>

#include <stdio.h>

#define N 3

struct friends
{ 
  float price;
  char name[20];
  unsigned int age;
};

typedef struct friends Friends;

int main ()
{
  Friends z[N] = {{0.0," ",0},{0.0," ",0},{0.0," ",0}};
  char inputText[20];
  size_t i;
  float totalPrice = 0.0;
  
  for(i=0;i<N;i++){
    puts("Enter name: ");
    //scanf("%s",z[i].name);
    fgets(z[i].name,19,stdin);

    puts("Enter age: ");
    //scanf("%u",&z[i].age);
    fgets(inputText,3,stdin);
    z[i].age = (unsigned int)strtoul(inputText,NULL,0);

    puts("Enter price: ");
    //scanf("%f",&z[i].price);
    fgets(inputText,10,stdin);
    z[i].price = strtof(inputText,NULL);

 }
  for(i=0;i<N;i++){
    printf("%s\t%u\t%f\n",z[i].name,z[i].age,z[i].price);
    totalPrice += z[i].price;
 }
  printf("Total Ticket Price: %f\n",totalPrice);
}
