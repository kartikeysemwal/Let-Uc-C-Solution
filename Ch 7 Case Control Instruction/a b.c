#include<stdio.h>
int factorial(int a);
int main()
{
    int a,number,fact;

    printf("Enter a number to find.\n");
    scanf("%d",&a);
    fact=factorial(a);
    printf("%d",fact);
}
  int factorial(a)
   {
       if(a==0)
        return 1;
       if(a==1)
        return 1;
       else
        return (a*factorial(a-1));
   }


