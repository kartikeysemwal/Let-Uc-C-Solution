#include<stdio.h>
int factorial(int);
int main()
{
    int fact,a;
    printf("Enter a number\n");
    scanf("%d",&a);
    fact=factorial(a);
    printf("%d\n",fact);
    return 0;
}
int factorial(int x)
{
    if(x==1)
        return 1;
    else
        return(x*factorial(x-1));
}
