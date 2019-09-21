#include<stdio.h>
int main()
{
    int yos;
    char sex, qua;
    printf("Enter your sex.\n");
    scanf("%c",&sex);
    if(sex=='m')
    {
        printf("Enter your years of service and qualification.\n");
        scanf("%d %c",&yos,&qua);
        {
        if((yos>=10)&&(qua=='p'))
            printf("Salary is 15000.\n");
        else if((yos>=10)&&(qua=='g'))
            printf("Salary is 10000.\n");
        else if((yos<10)&&(qua=='p'))
            printf("Salary is 10000.\n");
        else if((yos<10)&&(qua=='g'))
            printf("Salary is 7000.\n");
        }
        }
        if(sex=='f')
        {
            printf("Enter your years of service and qualification.\n");
            scanf("%d %c",&yos,&qua);
            {
            if((yos>=10)&&(qua=='p'))
            printf("Salary is 12000.\n");
        else if((yos>=10)&&(qua=='g'))
            printf("Salary is 9000.\n");
        else if((yos<10)&&(qua=='p'))
            printf("Salary is 10000.\n");
        else if((yos<10)&&(qua=='g'))
            printf("Salary is 6000.\n");
            }
        }
}
