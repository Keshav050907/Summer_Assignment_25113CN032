// Write a program to Write function for palindrome.
#include <stdio.h>

int isPalindrome(int num) 
{
    int original, reverse = 0, remainder;

    original = num;

    while(num != 0) 
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(original == reverse)
        return 1;
    else
        return 0;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("%d is a Palindrome Number\n", num);
    else
        printf("%d is not a Palindrome Number\n", num);

    return 0;
}