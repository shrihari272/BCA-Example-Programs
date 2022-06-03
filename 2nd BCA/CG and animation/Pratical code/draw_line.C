#include<stdio.h>
#include<graphics.h>
#include<math.h>
void draw_line(float x1,float y1,float x2,float y2)
{
    float i,step,xi,yi,dx,dy;
    if(x1 == x2 && y1 == y2)
    {
        printf("Invalid points");
        getch();
        exit(0);
    }
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    if(abs(dx) >= abs(dy))
        step = abs(dx);
    else
        step = abs(dy);

    xi = dx / step;
    yi = dy / step;

    for(i=0;i<=step;i++)
    {
        putpixel(x1,y1,15);
        x1 += xi;
        y1 += yi;
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
