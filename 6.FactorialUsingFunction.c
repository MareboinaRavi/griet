#include<stdio.h>
int Factorial(int n);
void main()
{
    int n,n1;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter second number:");
    scanf("%d",&n1);
    printf("Factorial of %d = %d",n,Factorial(n));
    printf("Factorial of %d = %d",n1,Factorial(n1));

}
int Factorial(int n)
{
    int i,temp=1;
    for(i=1;i<=n;i++)
        temp*=i;
    return temp;
}
