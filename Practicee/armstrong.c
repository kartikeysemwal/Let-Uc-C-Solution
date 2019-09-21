#include<stdio.h>
int main()
{
    int a,b,sum=0,i;
    for(i=0;i<=500;i++)
    {
        sum=0;
        a=i;
      {
          for(;a!=0;)
        {
            b=a%10;
            a=a/10;
            sum=sum+b*b*b;
        }
       if(sum==i)
            printf("%d\n",i);
      }
    }
}
