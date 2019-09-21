#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float agg,per;
    printf("Enter the marks obtained in five subjects.\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    agg=(a+b+c+d+e)/5;
    per=100*(a+b+c+d+e)/500;
    printf("The aggregate marks are %f",agg);
    printf("The percentage are %f",per);
}
