#include<stdio.h>
int sum(int);
int main()
{
    int n,su;
    printf("Enter a number up to which you want to find the sum.\n");
    scanf("%d",&n);
    su=sum(n);
    printf("The sum of the first %d natural number is %d.\n",n,su);
}
int sum(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
