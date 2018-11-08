//8.6 display string in upper and lower case
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char s[100];
    int i;
//Ask user for the string
    printf("Enter a line which you want to convert:\n");
    fgets(s,100,stdin);
    printf("\nThe line in uppercase is:\n");
//Loop through each character in the entered string
    for (i = 0; s[i] != '\0'; i++)
//Display the character and display them uppercase
        printf("%c", toupper(s[i]));

    printf("\nThe line in lowercase is:\n");

//Loop through each character display it in lowercase.   
    for (i = 0; s[i] != '\0'; i++)
        printf("%c", tolower(s[i]));
}
