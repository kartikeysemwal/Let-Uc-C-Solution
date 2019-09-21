#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d,e,f;
    for(n=1;n<=500;n++)
    {
        a=n/100;
        b=n/10-10*a;
        c=n-100*a-10*b;
        d=pow(a,3);
        e=pow(b,3);
        f=pow(c,3);
        if(d+e+f==n)
        {
            printf("%d\n",n);
        }

    }
}
