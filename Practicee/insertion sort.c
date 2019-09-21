#include<stdio.h>
int main()
{
    int arr[10],i,j,key;
    printf("Enter elements\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
        for(i=1;i<=9;i++)
        {
            key=arr[i];
            j=i-1;
            while(j>=0&&arr[j]>key)
            {
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }
        printf("Elements are\n");
        for(i=0;i<=9;i++)
            printf("%d\n",arr[i]);
}
