/*
   write a program that allows users to enforce privacy with data encrption  
   using the following menu:
	1: Encryption
	2: Decryption
	3: Exit
   Your program should implement the requirements of week2_tutorial-1.
*/

#include <stdio.h>
int encrypt(int plaintextInteger);    // function prototype   
int decrypt(int ciphertextInteger);

int main (void)
{ 
  int answer = 0, plaintextInteger, ciphertextInteger;

  do
  {
    
     puts("1: Encrypt");
     puts("2: Decrypt");
     puts("3: Exit");
     printf("Enter Choice ");
     
     scanf("%d", &choice);
     switch(choice)
     {     
       case 1 : printf("Enter 4-digit Plaintext Integer ");
                scanf("%d", &plaintextInteger);
                answer = encrypt(plaintextInteger); // function usage
                printf("Cipher for %d is %d \n", plaintextInteger,answer);
                break;

       case 2 : printf("Enter 4-digit Ciphertext Integer ");
                scanf("%d", &ciphertextInteger);
                answer = decrypt(ciphertextInteger); 
                printf("Plain for %d is %d \n", ciphertextInteger,answer);
                break;

            
       case 3 : puts ("Goodbye... Exiting the program now");
                break;

       default: puts("Invalid user choice... please try again");
                break;
     } 
   }while(choice != 3);
}

int encrypt(int plaintextInteger);    //function header
{                                     // function body begins
   

}                                    // function body ends

int decrypt(int ciphertextInteger);  
{                                   
   int x=0,y=0,z=0,i=0, num =4021;
   x = num%10;
   y = num/10;
   z = y*100;
   x = y%10;
   y = y/10;
   z = z+(y*1000);
   x = y%10;
   y = y/10;
   z = z +(y*1);
   x = y%10;
   y = y/10;
   z = z+(y*10);
   printf("%d",z)
   

}         

