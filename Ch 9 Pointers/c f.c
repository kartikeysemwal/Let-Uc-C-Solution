#include<stdio.h>
#include<math.h>
float distance(float,float,float,float);
float area(float,float,float,float,float,float);
float main()
{
    float x1,y1,x2,y2,x3,y3,ar;
    printf("Enter the first vertice.\n");
    scanf("%f %f",&x1,&y1);
    printf("Enter the second vertice.\n");
    scanf("%f %f",&x2,&y2);
    printf("Enter the third vertice.\n");
    scanf("%f %f",&x3,&y3);
    ar=area(x1,y1,x2,y2,x3,y3);
    printf("Area of triangle is %f.\n",ar);
    return 0;
}
float distance(float a1,float b1,float a2,float b2)
{
    float distance,dis;
    distance=pow((a2-a1),2)+pow((b2-b1),2);
    dis=sqrt(distance);
    return dis;
}
float area(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float ar,d1,d2;
    d1=distance(x3,y3,x2,y2);
    d2=distance(x1,y1,x2,y2);
    ar=1.0/2*d1*d2;
    return ar;
}
