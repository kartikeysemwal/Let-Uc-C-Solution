#include<stdio.h>
int main()
{
    int num,sum=0,a;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(;num!=0;)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("Sum of digits %d\n",sum);
}
