#include<stdio.h>
int main()
{
    int n,i,a,bin=0;
    printf("Enter a number to obtain its binary equivalent.\n");
    scanf("%d",&n);
    for(i=1;n!=0;i=i*10)
    {
        a=n%2;
        n=n/2;
        bin=a*i+bin;
    }
    printf("The binary equivalent of the number is %d.\n",bin);
}
