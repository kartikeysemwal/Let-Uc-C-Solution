#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("Enter the number up to you want to print the series.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;

    }
}
