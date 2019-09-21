#include<stdio.h>
int sum(int);
int main()
{
    int n,su;
    printf("Enter the number up to which you want to find the sum.\n");
    scanf("%d",&n);
    su=sum(n);
    printf("Sum = %d\n",su);
    return 0;
}
int sum(int a)
{
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    else
        return a+sum(a-1);
}
