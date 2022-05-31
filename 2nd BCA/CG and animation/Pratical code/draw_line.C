#include<stdio.h>
#include<graphics.h>
#include<math.h>
void draw_line(float x1,float y1,float x2,float y2)
{
    float i,step,xi,yi,dx,dy,xn,yn;
    dx = abs(x2-x1);
    dy = abs(y2-y1);

    if(dx >= dy)
        step = dx;
    else
        step = dy;

    if(x1 < x2)
        xn = x1;
    else
        xn = x2;

    if(y1 < y2)
        yn = y1;
    else
        yn = y2;

    xi = dx / step;
    yi = dy / step;

    for(i=0;i<=step;i++)
    {
        putpixel(xn,yn,15);
        xn += xi;
        yn += yi;
    }
}
void main()
{
 float x1,y1,x2,y2;
 int gd=DETECT,gm;
 printf("Enter value for x1 : ");
 scanf("%f",&x1);
 printf("Enter value for y1 : ");
 scanf("%f",&y1);
 printf("Enter value for x2 : ");
 scanf("%f",&x2);
 printf("Enter value for y2 : ");
 scanf("%f",&y2);
 initgraph(&gd,&gm,"c://turboc3//bgi");

 draw_line(x1,y1,x2,y2);

 getch();
 closegraph();
}