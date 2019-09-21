#include<stdio.h>
int main()
{
    float a;
    printf("Enter the distance between the cities in kilometers.\n");
    scanf("%f",&a);
    printf("In meters %f\n",a*1000);
    printf("In feet %f\n",a*1000*3.33);
    printf("In inches %f\n",a*1000*100*(1/2.5));
    printf("In centimeters %f",a*1000*100);

}
