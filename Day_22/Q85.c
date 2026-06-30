// Write a program to Check palindrome string. 
#include <stdio.h>

int main() 
{
    char str[100];
    int i, length = 0, palindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[length] != '\0') 
    {
        length++;
    }
    for(i = 0; i < length / 2; i++) 
    {
        if(str[i] != str[length - i - 1]) 
        {
            palindrome = 0;
            break;
        }
    }
    if(palindrome)
        printf("String is Palindrome.");
    else
        printf("String is Not Palindrome.");
    return 0;
}