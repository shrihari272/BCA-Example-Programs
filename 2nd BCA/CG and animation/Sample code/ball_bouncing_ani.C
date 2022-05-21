#include<graphics.h>
#include<dos.h>
void up();
void down(int *x,int *y)
{
	for(;*y <=239;*y += 1)
	{
	setcolor(WHITE);
	outtextxy(0,0,"Press any key to exit ......");
	setcolor(GREEN);
	line(0,239+50,639,239+50);
	if(*x==319 && *y==239)
	{
	setcolor(RED);
	ellipse(*x,*y,0,360,60,50);
	delay(50);
	cleardevice();
	return;
	}
	setcolor(RED);
	circle(*x,*y,50);
	delay(3);
	cleardevice();
	}
}
void main()
{
   up();
   getch();
   closegraph();
}
void up()
{
	int i,gd=0,gm,x,y;
	initgraph(&gd,&gm,"c://turboc3//bgi");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(;y>=100;y--)
	{
	setcolor(YELLOW);
	outtextxy(0,0,"Press any key to exit ......");
	setcolor(GREEN);
	line(0,239+50,639,239+50);
	setcolor(RED);
	circle(x,y,50);
	if(y==100)
	down(&x,&y);
	delay(3);
	cleardevice();
	if(kbhit())
	exit(0);
	}
}