#include<stdio.h>
int main()
{
    int arr[10],beg=0,end=9,i,item,mid;
    printf("Enter the elements\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to search\n");
    scanf("%d",&item);
    mid=(beg+end)/2;
    while(beg<=end&&arr[mid]!=item)
    {
        mid=(beg+end)/2;
            if(item<arr[mid])
            {
                end=(mid-1);
            }
            else if(item>arr[mid])
            {
                beg=mid+1;
            }
    }
    if(arr[mid]==item)
        printf("Item is present at %d\n",mid+1);
    else
        printf("Item is not present\n");
}
