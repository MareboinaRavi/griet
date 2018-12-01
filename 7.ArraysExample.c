#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,sum=0;
    //Reading numbers
    for(i=0;i<5;i++)
    {
        printf("Enter any number:");
        scanf("%d",&a[i]);
    }
    //To find sum
    for(i=0;i<5;i++)
        sum+=a[i];
    printf("Sum=%d",sum);
}
