#include<graphics.h>
void main()
{
 int gd=DETECT,gm,x,y;
 initgraph(&gd,&gm,"c://turboc3//bgi");
 x = 400;
 y = 239;
 //face
 circle(x-250,y-100,60);
 setfillstyle(1,15);
 ellipse(x-270,y-110,0,360,5,10);
 floodfill(x-270,y-110,15);
 ellipse(x-230,y-110,0,360,5,10);
 floodfill(x-231,y-110,15);
 line(x-250,y-90,x-250,y-100);
 arc(x-250,y-65,0,180,10);
 line(x-260,y-65,x-240,y-65);
 floodfill(x-250,y-66,15);
 //body
 line(x-250,y-40,x-250,y+130);
 //hand
 line(x-250,y+10,x-300,y-15);
 line(x-250,y+10,x-200,y-15);
 //legs
 line(x-250,y+130,x-300,y+150);
 line(x-250,y+130,x-200,y+150);
 //rectangle
 setfillstyle(3,1);
 rectangle(x-30,y+40,x+200,y+150);
 floodfill(x-29,y+41,15);
 //fish
 ellipse(x+30,y+95,0,360,30,10);
 arc(x+15,y+95,270,90,10);
 setfillstyle(1,15);
 circle(x+10,y+94,2);
 floodfill(x+10,y+94,15);
 //gills
 line(x+30,y+85,x+40,y+80);
 line(x+30,y+105,x+40,y+110);
 line(x+59,y+90,x+80,y+80);
 line(x+59,y+100,x+80,y+110);
 line(x+80,y+80,x+80,y+110);
 //hand to fish
 line(x-200,y-15,x,y+95);
 getch();
 closegraph();
}