#include<stdio.h>
int factorial(int);
int main()
{
 int a,fact;
 printf("Enter a number to find its factorial.\n");
 scanf("%d",&a);
 fact=factorial(a);
 printf("%d",fact);
}
int factorial(int b)
{
    int c;
    if(b==0)
        return(1);
    if(b==1)
    return(1);
    c=b*factorial(b-1);
    return(c);
}
