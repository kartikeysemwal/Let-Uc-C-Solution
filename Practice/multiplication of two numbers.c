#include<stdio.h>
int multiplication(int,int);
int main()
{
    int a,b,mul;
    printf("Enter the numbers you want to multiply.\n");
    scanf("%d %d",&a,&b);
    mul=multiplication(a,b);
    printf("The multiplication is %d.\n",mul);
    return 0;
}
int multiplication(int a,int b)
{
    int i,mul=0;
    for(i=1;i<=b;i++)
        mul=mul+a;
    return mul;
}
