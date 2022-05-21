#include<graphics.h>
#include<dos.h>
void main()
{
  int gd=DETECT,gm,x,y,i,j,er;
  initgraph(&gd,&gm,"c://turboc3/bgi");
  er = graphresult();
  if(er != grOk)
  {
    printf("Problem in driver");
    getch();
    exit(0);
  }
  x= getmaxx()/2;
  y= getmaxy()/2;
  while(!kbhit())
  {
    //x -- x+90   y+80 -- y
    j=y+80;
    for(i=x;i<=x+90 && j>=y;i++)
    {  
      setcolor(GREEN);
      line(x-100,y-90,x-100,y+90);
      line(x-100,y-90,x+100,y-90);
      line(x+100,y+90,x-100,y+90);
      line(x+100,y-90,x+100,y+90);
      line(x,y-4,x,y+4);
      line(x-4,y,x+4,y);
      setcolor(RED);
      circle(i,j,10);
      delay(10);
      j-=1;
      cleardevice();
    }
    //x+90 --x-90   y -- y-90
    j = y;
    for(i=x+90;i>=x-90 && j>=y-80;i--)
    {
      setcolor(GREEN);
      line(x-100,y-90,x-100,y+90);
      line(x-100,y-90,x+100,y-90);
      line(x+100,y+90,x-100,y+90);
      line(x+100,y-90,x+100,y+90);
      line(x,y-4,x,y+4);
      line(x-4,y,x+4,y);
      setcolor(RED);
      circle(i,j,10);
      delay(10);
      j-=1;
      cleardevice();
    }
    // x-90 -- x-180 y-90 -- y+90
    j=y-80;
    for(i=x;i>=x-90 && j<=y;i--)
    {
      setcolor(GREEN);
      line(x-100,y-90,x-100,y+90);
      line(x-100,y-90,x+100,y-90);
      line(x+100,y+90,x-100,y+90);
      line(x+100,y-90,x+100,y+90);
      line(x,y-4,x,y+4);
      line(x-4,y,x+4,y);
      setcolor(RED);
      circle(i,j,10);
      delay(10);
      j+=1;
      cleardevice();
    }
    // x-90 -- x y--y+90
    for(i=x-90;i<=x && j<=y+80;i++)
    {
      setcolor(GREEN);
      line(x-100,y-90,x-100,y+90);
      line(x-100,y-90,x+100,y-90);
      line(x+100,y+90,x-100,y+90);
      line(x+100,y-90,x+100,y+90);
      line(x,y-4,x,y+4);
      line(x-4,y,x+4,y);
      setcolor(RED);
      circle(i,j,10);
      delay(10);
      j+=1;
      cleardevice();
    }
  }
  getch();
  closegraph();
}