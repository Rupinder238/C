//8.16 searching for substrings
#include <stdio.h>
#include <string.h>
int main(void)
{
    char line[80];
    char searchword[15];
    char *searchPtr;

//get the text from the user and the searchword also from the user.

    printf("Enter a line of text:\n");
    fgets(line,80,stdin);

    printf("Enter a search string: ");
    fgets(searchword,15,stdin);
    size_t length = strlen(searchword);

//as we are using fgets so the string ends with \n and i replace it with the \0 

    if (searchword[length-1] == '\n'){
        searchword[length-1] = '\0';
    }

    searchPtr = strstr(line, searchword);

// if the word is found it will display the string starting from that word using the searchptr.

    if (searchPtr)
    { 
        printf("\nThe remainder of the line beginning with\n");
        printf("the first occurrence of %s:\n", searchword);
        printf("%s\n", searchPtr);

// search for the search string in the remainder of the sentence

        searchPtr = strstr(searchPtr + 1, searchword);

// if it is found the second occurance

        if (searchPtr) 
        {

// display the sentence from the second occurrence of the search string on

            printf("\nThe remainder of the line beginning with\n");
            printf("the second occurrence of %s:\n", searchword);
            printf("%s\n", searchPtr);
        }
        else
            printf("The search string appeared only once.\n");
    }
    else
        printf("%s not found.", searchword);

}
