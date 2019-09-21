#include<stdio.h>
int main()
{
    int a,b=1,c, max, min;
    printf("Write the number of elements in the set.\n");
    scanf("%d",&c);
    while(b<=c)
    {
        printf("Write number.\n");
        scanf("%d",&a);
        if(b==1)
        {
            max=a;
            min=a;
        }
        if(b>1)
        {
            if(max<a)
                max=a;
            if(min>a)
            min=a;
        }
        b++;


    }
    printf("The maximum number is %d and the minimum number is %d \n So the range of the set is %d",max,min,max-min);
}
