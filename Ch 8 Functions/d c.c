#include<stdio.h>
int equ(int);
int main()
{
    int a,b;
    printf("Enter any year to find its Roman equivalent.\n");
    scanf("%d",&a);
    b=equ(a);
}
int equ( int year)
{
    int c,d,e,f,g,h,i,j,k,l,q,r,s,t;
    c=year/1000;
    d=(year-1000*c)/500;
    e=(year-1000*c-500*d)/100;
    f=(year-1000*c-500*d-100*e)/50;
    g=(year-1000*c-500*d-100*e-50*f)/10;
    h=(year-1000*c-500*d-100*e-50*f-10*g)/5;
    i=(year-1000*c-500*d-100*e-50*f-10*g-5*h)/1;
    for(j=1;j<=c;j++)
    {
        printf("m");
    }
     for(k=1;k<=d;k++)
    {
        printf("d");
    }
     for(l=1;l<=e;l++)
    {
        printf("c");
    }
     for(q=1;q<=f;q++)
    {
        printf("l");
    }
     for(r=1;r<=g;r++)
    {
        printf("x");
    }
     for(s=1;s<=h;s++)
    {
        printf("v");
    }
     for(t=1;t<=i;t++)
    {
        printf("i");
    }
}
