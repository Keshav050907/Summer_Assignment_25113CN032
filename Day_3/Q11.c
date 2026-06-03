//write a program to find GCD of two numbere.
#include<stdio.h>
int main()
{

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("GCD of %d and %d is %d",a,b,a);
    return 0;
}