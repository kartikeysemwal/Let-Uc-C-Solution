#include<stdio.h>
int main()
{
    char b;
    int a,c=0,d=0,e=0;
    do
    {
        printf("Enter the number.\n");
        scanf("%d",&a);
        if(a>0)
            c=c+1;
        else if(a<0)
            d=d+1;
        else if(a==0)
            e=e+1;
            b++;
        printf("Want to enter another number y/n.\n");
        fflush(stdin);
        scanf("%c",&b);
    }
    while(b=='y');
    printf("The number of positive numbers entered is %d \n the number of negative numbers entered is %d \n the number of zeros entered is %d",c,d,e);



}
