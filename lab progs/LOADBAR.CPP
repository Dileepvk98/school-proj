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
  //cout<<"LOADING ... \n\n\n";
  int mx=getmaxx(); int my=getmaxy();
  rectangle(1,230,638,240);
  setfillstyle(SOLID_FILL,BLUE);
  for(int i=1;i<=mx;i+=12)
  { sound(i+150);
    delay(20);
    bar(0,231,i,239);
    nosound();
  }
  outtextxy(230,440,"press any key to continue ");
  getch();
}