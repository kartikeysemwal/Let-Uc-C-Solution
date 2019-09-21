#include<stdio.h>
#include<math.h>
int factor(int);
int main()
{
    int a;
    printf("Enter a number to find its prime factor.\n");
    scanf("%d",&a);
    factor(a);
}
int factor(int num)
{
    int b,c,d,i,s,j,k;
     s=sqrt(i);
     i=num;
     if(num%2==0)
       {
           for(i=num;i!=1;)
        {
                i=i/2;
            printf("2 ");
            if(i%2!=0)
                break;
        }
       }
       for(j=3;j<=s;j=j+2)
       {
           if(i%j==0)
        {
            for(;k!=1;)
            {
                k=i/j;
                printf("%d ",j);
                i=k;
                if(k%j!=0)
                    break;
            }
        }

}
}
