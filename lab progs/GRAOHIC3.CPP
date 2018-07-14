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
  int p[8]={100,100,200,200,100,200,100,100};
  int l[8]={300,300,400,400,300,400,300,300};
  rectangle(100,100,300,300);
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(200,200,WHITE);
  int mx,my;
  mx=getmaxx(); my=getmaxy();

  getch();
  }


