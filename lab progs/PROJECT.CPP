#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
class customer
{ char cname[40],addr[50]; };

void loadbar()
{ setfillstyle(SOLID_FILL,BLUE);rectangle(0,230,638,240);
  for(int i=1;i<=640;i+=5){delay(5);bar(1,231,i,239);}
}
void main()
{ clrscr();
  int gm,gd=DETECT; initgraph(&gd,&gm,"c:\\turboc3\\bgi"); //graphic
  loadbar();
  cleardevice();
  setbkcolor(BLUE);  char exitch;
  outtextxy(200,230,"Welcome to the ELECTRONICS shop. ");
  outtextxy(240,430,"press ' . ' to exit. ");
  cin>>exitch;
  if(exitch=='.') exit(0);
  else
  { }
  getch();
}
