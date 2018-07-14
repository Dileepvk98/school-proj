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
  cout<<"CAR\n";      int i;
  line(0,400,800,400); //road
  for(i=0;i<400;i++)
  { sound(i);
    delay(10);
    nosound();
   setcolor(i+=2);
   cleardevice();
   line(75+i,320,150+i,320);          //roof
   line(150+i,320,190+i,350);   //windshield
   line(190+i,350,235+i,350);     //bonnet
   line(235+i,350,235+i,365);       //front
   line(20+i,345,75+i,320);         //back windshield
   line(20+i,345,20+i,365);	     //back
   line(20+i,365,235+i,365);           //bottom
   circle(50+i,385,15);   //tyre back
   circle(200+i,385,15);  //tyre  front
  }
  getch();
}