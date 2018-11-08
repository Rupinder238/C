#include <stdio.h>
// structure definition
struct student {  // struct keyword and structure tag
   int id;        // structure members 
   char name[20];
   char gender;
   float height;
};                // end of structure definition

// code: renaming type "struct student" to now be "Student"
typedef struct student Student;

int main ()
{
   //Structure declaration & Initialisation
   Student x = {123, "Jim", 'm', 5.7}; 
   //Student y;
   //Student z[3];
   Student *xPtr = &x;
   //size_t i;

   
   // Structure usage with the dot-operator
   //printf("The Id is : %d \n", x.id); 
   //printf("The Name is : %s \n", x.name);
   //printf("The Gender is : %c \n",x.gender);
   //printf("The Height is : %.2f \n",x.height);
   
   // Read new info into Student Y and Print the information  
   /*
   printf("Enter ID ");
   scanf("%d", &y.id);

   printf("Enter Name ");
   scanf("%s", y.name);

   printf("Enter Gender ");
   scanf(" %c", &y.gender);

   printf("Enter Height ");
   scanf("%f", &y.height);

   printf("ID for Student Y is %d \n", y.id);
   printf("Name for Student Y is %s \n", y.name);
   printf("Gender for Student Y is %c \n", y.gender);
   printf("Height for Student Y is %.2f \n", y.height);
   */

   // Structure usage with the arrow-operator
   // printf("Using Pointer, The Id is : %d \n", xPtr->id); 
   // printf("Using Pointer, The Name is : %s \n", xPtr->name);
   // printf("Using Pointer, The Gender is : %c \n",xPtr->gender);
   // printf("Using Pointer, The Height is : %f \n",xPtr->height);

   // Structure usage with the arrow-operator broken down
   // printf("Another Pointer, The Id is : %d \n", (*xPtr).id); 
   // printf("Another Pointer, The Name is : %s \n", (*xPtr).name);
   // printf("Another Pointer, The Gender is : %c \n",(*xPtr).gender);
   // printf("Another Pointer, The Height is : %f \n",(*xPtr).height);
   
   // printing the size of the type "Student"
   // printf("The Size of the Student Type is %ld\n", sizeof(Student));
   // printf("The size of the Student Type is %u\n",sizeof(Student));
   
   
   // Processing arrays of structures
   /*
   for(i=0; i<3; i++)
   {
    printf("Enter id %zu ", i + 1);
    scanf("%d",&z[i].id);

    printf("Enter Name %zu ", i + 1);
    scanf("%s",z[i].name);

    printf("Enter Gender %zu ", i + 1);
    scanf(" %c",&z[i].gender);

    printf("Enter height %zu ", i + 1);
    scanf("%f",&z[i].height);
  }

  for(i=0; i<3; i++)
  {
    printf("%d\t",z[i].id);
    printf("%s\t",z[i].name);
    printf(" %c\t",z[i].gender);
    printf("%f\n",z[i].height);
  }
  */
  
} // end of main method



