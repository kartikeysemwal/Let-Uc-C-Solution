#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the three angles of the triangle.\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b+c==180)
        printf("The triangle if verified.\n");
    else
        printf("The triangleis not possible.\n");
}
