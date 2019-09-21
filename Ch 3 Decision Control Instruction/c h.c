#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to find its absolute values.\n");
    scanf("%d",&a);
    if(a<0)
        printf("The absolute value of the number is %d.\n",a*(-1));
    if(a>=0)
        printf("The absolute value pf number is %d.\n",a);
}
