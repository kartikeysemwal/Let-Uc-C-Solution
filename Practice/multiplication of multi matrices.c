#include<stdio.h>
int main()
{
    int n,m,p,q;
    printf("Enter the order of the first matrix.\n");
    scanf("%d %d",&n,&m);
    printf("Enter the order of the second matrix.\n");
    scanf("%d %d",&p,&q);
    if(m!=p)
    {
        printf("Matrix multiplication is not possible.\n");

    }
    else
    {
        int arr1[n][m],arr2[p][q],arr[n][q],i,j,k,sum=0;
    printf("Enter the elements of the first matrix.\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Enter the elements of the second matrix.\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&arr2[i][j]);
    }
        for(i=0;i<n;i++)
            for(j=0;j<q;j++)
        {
            for(k=0;k<q;k++)
            sum=sum+arr1[i][k]*arr2[k][j];
            arr[i][j]=sum;
            sum=0;
        }
        printf("The elements of the matrix is\n ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
                printf("%d  ",arr[i][j]);
            printf("\n");
        }
    }
}
