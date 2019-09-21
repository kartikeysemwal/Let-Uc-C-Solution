#include<stdio.h>
int main()
{
    int arr[10];
    int i,c=0,d=0,e=0,f=0;
    printf("Enter the numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>=0)
        {
            c=c+1;
        }
    }
     for(i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            d=d+1;
        }
    }
     for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            e=e+1;
        }
    }
     for(i=0;i<10;i++)
    {
        if(arr[i]%2!=0)
        {
            f=f+1;
        }
    }
    printf("The number of positive number entered is %d negative number entered is %d even number entered is %d and odd number entered is %d.\n",c,d,e,f);
}
