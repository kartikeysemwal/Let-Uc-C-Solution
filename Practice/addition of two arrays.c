#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],arr[2][2],i,j;
    printf("Enter the elements of the first array.\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr1[i][j]);
    printf("Enter the elements of the second array.\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr2[i][j]);
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
            arr[i][j]=arr1[i][j]+arr2[i][j];
        printf("The sum of the two matrices is\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
                printf("%d   ",arr[i][j]);
            printf("\n");
        }
}
