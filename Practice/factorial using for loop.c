#include<stdio.h>
int main()
{
    int i,num,factorial=1;
    printf("Enter the number to find its factorial.\n");
    scanf("%d",&num);
    for(i=num;i>1;i--)
    factorial=factorial*i;
    printf("The factorial of number %d is %d.\n",num,factorial);

}
