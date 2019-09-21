#include<stdio.h>
int main()
{
    int n,m=0,i,j,a;
    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;
    for(;a!=0;)
    {
        j=a%10;
        m=m*10+j;
        a=a/10;
    }
    if(m==n)
        printf("Number is palindrome\n");
    else
        printf("Number is not palindrome\n");
}
