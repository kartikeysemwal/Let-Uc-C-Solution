#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter the number to find its factorial.\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial of number is %d.\n",fact);
}
int factorial(int num)
{
    if(num==0)
        return 1;
        if(num==1)
        return 1;
        else
            return num*factorial(num-1);
}
