#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i==2)
            printf("2\n");
        else
        {
            for(j=i-1;j>=2;j--)
            {
                if(i%j==0)
                    break;
                else
                    continue;
            }
        }
        if(j==1)
            printf("%d\n",i);
    }
}
