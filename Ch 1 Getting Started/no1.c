#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter your basic salary.\n");
    scanf("%f",&a);
    b=a*40/100;
    c=a*20/100;
    d=a+b+c;
    printf("Dearness allowance %f\n House rent %f\n Gross salary %f",b,c,d);

}
