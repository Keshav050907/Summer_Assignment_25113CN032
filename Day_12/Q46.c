// Write a program to Write function for Armstrong.
#include <stdio.h>

int isArmstrong(int num) 
{
    int original, digit, sum = 0;

    original = num;

    while(num != 0) 
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(sum == original)
        return 1;
    else
        return 0;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is not an Armstrong Number\n", num);

    return 0;
}  