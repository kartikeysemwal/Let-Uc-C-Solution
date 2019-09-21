#include<stdio.h>
int main()
{
    int arr[5][5],a=1,i,j;
    printf("Enter the elements of the array.\n");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        scanf("%d",&arr[i][j]);
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {
        if(a<arr[i][j])
            a=arr[i][j];
    }
    printf("The largest number of the array is %d.\n",a);
    return 0;
}
