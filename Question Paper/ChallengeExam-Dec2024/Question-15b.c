//Write a C function to concatenate two strings using pointers?

#include <stdio.h>

void concatenate(char *str1, char *str2) 
{
    // Move pointer to the end of the first string
    while (*str1 != '\0') 
    {
        str1++;
    }

    // Copy characters from str2 to the end of str1
    while (*str2 != '\0') 
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Add null terminator at the end
    *str1 = '\0';
}

int main() 
{
    char str1[100], str2[50];

    printf("Enter first string: ");
    gets(str1);  

    printf("Enter second string: ");
    gets(str2);

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}


Output

Enter first string: Hello
Enter second string: Karthik
Concatenated string: HelloKarthik
