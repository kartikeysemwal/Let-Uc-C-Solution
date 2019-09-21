#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],arr[2][2],i,j,k,sum=0;
    printf("Enter the elements of the first element.\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr1[i][j]);
    printf("Enter the elements of the second element.\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr2[i][j]);
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            sum=sum+arr1[i][k]*arr2[k][j];
            printf("%d %d\n",i,j);
            arr[i][j]=sum;
            sum=0;
        }
        printf("The elements of the martice is\n ");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
                printf("%d  ",arr[i][j]);
            printf("\n");
        }
}
