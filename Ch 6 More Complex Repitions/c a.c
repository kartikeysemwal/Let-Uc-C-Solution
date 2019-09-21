#include<stdio.h>
int main()
{
    int a,b;
    for(a=3;a<=300;a++)
    {
        b=2;
        while(b<a)
        {
            if(a%b==0)
                break;
                if(b==a-1)
                    printf("%d\n",a);
                b++;

        }
    }
}
