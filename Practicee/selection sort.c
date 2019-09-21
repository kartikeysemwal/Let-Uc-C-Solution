#include<stdio.h>
int main()
{
    int small,i,j,loc,arr[8],t;
    printf("Enter the elements of array\n");
    for(i=0;i<=7;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=6;i++)
    {
        small=arr[i];
        for(j=i;j<=7;j++)
        {
            if(small>arr[j])
            {
                small=arr[j];
                loc=j;
            }
        }
        t=arr[i];
        arr[i]=small;
        arr[loc]=t;
    }
    printf("Elements of the array\n");
    for(i=0;i<=7;i++)
        printf("%d\n",arr[i]);
}
