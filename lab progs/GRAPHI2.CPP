#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{ clrscr();
  int gm,gd=DETECT;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  cleardevice();
  setbkcolor(BLUE);
  bar(0,0,640,20);
  int mx,my;
  mx=getmaxx(); my=getmaxy();
  for(int i=0;i<mx;i++)
  { sound(i);
    delay(10);
    cleardevice();
   setcolor(WHITE);
   bar(0,460,639,479);    //road
   bar(10+i,360,140+i,420);   //body
   bar(140+i,420,175+i,380);                        //front
   circle(25+i,440,17);
   circle(110+i,440,17);
   nosound();
   if(i==0)
   { setcolor(RED);
     outtextxy(270,10,"press any key");
     getch();
   }
  }
  //getch();
}