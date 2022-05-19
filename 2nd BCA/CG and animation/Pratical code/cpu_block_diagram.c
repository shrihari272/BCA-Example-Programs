#include<graphics.h>
void arrows(int x,int y);
void box(int x,int y);
void text(int x,int y);
void main()
{
 int gd=DETECT,gm,x,y;
 initgraph(&gd,&gm,"c://turboc3//bgi");
 x = getmaxx()/2;
 y = getmaxy()/2;
 box(x,y);
 arrows(x,y);
 text(x,y);
 getch();
 closegraph();
}
void box(int x,int y)
{
 setcolor(BLUE);
 //outer box
 rectangle(x-100,y-100,x+100,y+100);
 //inside box 1
 rectangle(x-85,y-85,x+85,y-40);
 //inside box 2
 rectangle(x-85,y-25,x+85,y+20);
 //inside box 3
 rectangle(x-85,y+35,x+85,y+80);
 //input output box
 rectangle(x-200,y-10,x-140,y+20);
 rectangle(x+200,y-10,x+140,y+20);
}
void arrows(int x,int y)
{
 setcolor(GREEN);
 //arrow1 down
 line(x-70,y-40,x-70,y-25);
 line(x-70,y-25,x-65,y-30);
 line(x-70,y-25,x-75,y-30);
 //arrow2 down
 line(x-70,y+20,x-70,y+35);
 line(x-70,y+35,x-65,y+30);
 line(x-70,y+35,x-75,y+30);
 //arrow1 up
 line(x+70,y-40,x+70,y-25);
 line(x+70,y-40,x+65,y-35);
 line(x+70,y-40,x+75,y-35);
 //arrow2 up
 line(x+70,y+20,x+70,y+35);
 line(x+70,y+20,x+65,y+25);
 line(x+70,y+20,x+75,y+25);
 //arrow input
 line(x-140,y+5,x-100,y+5);
 line(x-100,y+5,x-105,y+10);
 line(x-100,y+5,x-105,y);
 //arrow output
 line(x+140,y+5,x+100,y+5);
 line(x+140,y+5,x+135,y+10);
 line(x+140,y+5,x+135,y);
}
void text(int x,int y)
{
 //text
 setcolor(RED);
 outtextxy(x-30,y-65,"ALU UNIT");
 outtextxy(x-30,y-5,"CPU UNIT");
 outtextxy(x-40,y+55,"MEMORY UNIT");
 outtextxy(x-190,y,"INPUT");
 outtextxy(x+150,y,"OUTPUT");
}