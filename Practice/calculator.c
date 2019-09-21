#include<stdio.h>
int main()
{
    int i,a,b,result,sum=0;
    printf("Enter the two number.\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operation you want to apply\n Enter 1 for addition\n Enter 2 for subtraction\n Enter 3 for multiplication\n Enter 4 for division\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        result=a+b;
        sum=sum+1;
        break;
    case 2:
        result=a-b;
        sum=sum+1;
        break;
    case 3:
        result=a*b;
        sum=sum+1;
        break;
    case 4:
        result=a/b;
        sum=sum+1;
        break;
    default:
        printf("Enter a valid operation.\n");
    }
    if(sum!=0)
    printf("The result is %d.\n",result);
}
