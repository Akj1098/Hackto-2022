#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("enter the number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("\n factorial of %d is:%d",n,factorial);
}
