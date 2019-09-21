#include<stdio.h>
int main()
{
    int age;
    char sex;
    char mar;
    printf("Enter your age, marital status and sex.\n");
    scanf("%d   %c  %c",&age,&mar,&sex);
    if(mar=='m'||mar=='u'&&sex=='m'&&age>30||mar=='u'&&sex=='f'&&age>25)
        printf("You are selected for the job.\n");
    else
    printf("Try again later when you are eligible.\n");
    return 0;

}
