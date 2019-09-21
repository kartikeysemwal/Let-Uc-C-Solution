#include<stdio.h>
int main()
{
    int i,j,arr[6],t;
    printf("Enter the elements\n");
    for(i=0;i<=5;i++)
        scanf("%d",&arr[i]);
    for(i=5;i>=1;i--)
    for(j=0;j<5;j++)
    {
        if(arr[j]>arr[j+1])
        {
            t=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=t;
        }
        else
            continue;
    }
    printf("Elements of the array\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
