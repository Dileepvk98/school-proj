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
  setcolor(WHITE);
  cout<<"TEXT ";
  int i;
  for(i=1;i<200;i+=2)
  {
    sound(i+100);
    delay(25);
    nosound();
   setcolor(i);
   circle(200+i,200+i,75+3*i);
   circle(150+i,150+i,5);
   circle(250+i,150+i,5);
   arc(200+i,225+i,180,360,50);
  } //line(175,275,225,275);
  //rectangle(100,100,300,300);
  getch();
  closegraph();
  }