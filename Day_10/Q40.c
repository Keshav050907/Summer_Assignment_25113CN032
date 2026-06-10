// Write a program to Print character pyramid. 
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
#include <stdio.h>

int main() 
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {

        // Print spaces
        for(j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        // Print increasing characters
        for(j = 0; j < i; j++) 
        {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for(j = i - 2; j >= 0; j--) 
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}