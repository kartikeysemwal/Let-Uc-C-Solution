#include<stdio.h.>
int main()
{
    int n,b,a,bin=0,i;
    printf("Enter a number to obtain its binary equivalent\n");
    scanf("%d",&n);
    a=n;
    for(i=1;n!=0;i=i*10)
    {
        b=n%2;
        n=n/2;
        bin=bin+b*i;
    }
    printf("The binary equivalent of the number is %d\n",bin);
}
