#include<stdio.h>
void main()
{
    int n=1000,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\t",i);
    }
}
