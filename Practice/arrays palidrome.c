#include<stdio.h>
int main()
{
    int num,i,rev=0,k,y;
    printf("Enter the number to find its reverse.\n");
    scanf("%d",&num);
    y=num;
    for(i=1;num!=0;)
    {
        k=num%10;
        num=num/10;
        rev=rev*10+k;
    }
    if(y==rev)
        printf("The number is palindrome.\n");
    else
        printf("The number is not palindrome.\n");
}
