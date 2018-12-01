#include<stdio.h>
#include<conio.h>
int Factorial(int n);
void main()
{
    int n, r, nCr, nPr;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Enter r value:");
    scanf("%d",&r);
    nPr=Fact(n)/Fact(n-r);
    nCr=nPr/Fact(r);
    printf("%dP%d=%d\n",n,r,nPr);
    printf("%dC%d=%d\n",n,r,nCr);
}
int Fact(int n)
{
    int i, temp=1;
    for(i=1;i<=n;i++)
        temp*=i;
    return temp;
}
