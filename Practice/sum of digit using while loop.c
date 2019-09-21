#include<stdio.h>
int main()
{
    int n,num,i,sum=0;
    printf("Enter the number.\n");
    scanf("%d",&n);
    for(i=n;n!=0;)
    {
        i=n%10;
        n=n/10;
        sum=sum+i;
    }
    printf("%d\n",sum);
}
