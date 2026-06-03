//write a program to print prime number in a range.
#include<stdio.h>
int main()
{
    int i,j,n,m,count;
    printf("Enter the range: ");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}