#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the lenght of the three sides of the triangle.\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
        printf("The triangle is valid.\n");
    else
        printf("The triangle is invalid.\n");

}