#include<stdio.h>
void main()
{
    int n,i,temp=1;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        temp*=i;
    printf("Result = %d",temp);
}
