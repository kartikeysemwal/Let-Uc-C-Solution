#include<stdio.h>
int main()
{
    float sal, hra, da, gross;
    printf("Enter your basic salary.\n");
    scanf("%f",&sal);
    if(sal<1500)
    {
        hra=sal*10/100;
        da=sal*90/100;
    }
    else
    {
        hra=500;
        da=sal*98/100;

    }
    gross=sal+hra+da;
    printf("Your gross salary is %f",gross);
    return(0);
}


