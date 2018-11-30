#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count=0,i;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
        count=count+1;
    }
    if(count==2)
        printf("%d is Prime Number",n);
    else
        printf("%d Not prime number",n);

    getch();
}
