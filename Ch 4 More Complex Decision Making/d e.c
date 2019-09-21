#include<stdio.h>
int main()
{
    int count=1;
    float r,g,b,c, m, y, k, max,w;
    while(count<=10)
    {



    printf("\nEnter the values of the Red, Green and Blue.\n");
    scanf("%f %f %f",&r,&g,&b);
    if((r>0&&r<250)&&(g>0&&g<250)&&(b>0&&b<250))
    {
        if(r>g)
    {
        if(r>b)
            max=r;
    }
     if(b>g)
    {
        if(b>r)
            max=b;
    }
     if(g>r)
    {
        if(g>b)
            max=g;
            }
            w=max/255;
    c=(w-r/255)/w;
    m=(w-g/255)/w;
    y=(w-b/255)/w;
    k=1-w;
    printf("The required outputs are \nCyan=%f, \nMagenta=%f, \nYellow=%f, \nBlack=%f",c,m,y,k);
    }
    else
        printf("The values are invalid.\n");
    count=count+1;
    }

}
