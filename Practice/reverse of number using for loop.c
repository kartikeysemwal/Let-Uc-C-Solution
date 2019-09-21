#include<stdio.h>
int main()
{
    int num,i,rev=0,k;
    printf("Enter the number to find its reverse.\n");
    scanf("%d",&num);
    for(i=1;num!=0;)
    {
        k=num%10;
        num=num/10;
        rev=rev*10+k;
    }
    printf("The reverse of the number is %d.\n",rev);
}
