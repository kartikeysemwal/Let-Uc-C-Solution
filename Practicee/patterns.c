#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
            printf(" ");
        for(k=i;k>=1;k--)
            printf("%d",k);
            if(i>=2)
            {
                for(l=2;l<=i;l++)
                    printf("%d",l);
            }
            printf("\n");
    }
}
