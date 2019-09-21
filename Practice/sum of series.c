#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("Enter the number up to which you want to find the sum of the series.\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        sum=sum+1.0/i;
    printf("%f\n",sum);
}
