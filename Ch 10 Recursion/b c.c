#include<stdio.h>
int fibonacci(int);
int main()
{
    int i,n;
    printf("Enter the number of elements you want to print.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d\n",fibonacci(i));
    return 0;
}
int fibonacci(int a)
{
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    else
        return fibonacci(a-1)+fibonacci(a-2);
}
