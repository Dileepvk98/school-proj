/* Date: 3/11/15
   PROGRAM:20
   
   Write a program to implement a circular queue of books using
   structure and class.Include member functions to add,delete
   and display book information

Source Code:                                       */
#include<iostream.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
const int size=10;

// Defining structure Book
struct Book
{
  int Bno;
  char Bname[20];
  float price;
};
// Class definition to implement circular queue

class queue
 {
     Book B[size];
     int front ,rear;
     public:
	   queue() {front=rear= -1;}
	   void insert();
	   void del();
	   void disp();
};
// member function to insert book information into queue
void queue::insert()
{
   if((front==0 && rear==size-1)||(front==rear+1) )
      cout<<"queue full:";
     else
     {
       if(rear==-1)
	front=rear=0;
      else
       if(rear==size-1)
	  rear=0;
       else
	   rear++;
	cout<<"\n Enter Book no,Book Name,Price :";
	cin>>B[rear].Bno;
	gets(B[rear].Bname);
	cin>>B[rear].price;
    }
}
// member function to display  book information
void queue::disp()
{
  int i=front;
   if(front==-1)
     { cout<<" Circular queue is empty:";
       return;
     }
  while(i!=rear)
  {
     cout<<"\n\n Book no="<<B[i].Bno<<"\n Bname="<<B[i].Bname<<"\n Price="<<B[i].price;
      if(i==size-1) i=0;
       else  i++;
   }
 cout<<"\n Book no="<<B[rear].Bno<<"\n Bname="<<B[rear].Bname<<"\n Price="<<B[rear].price;
}
// member function to delete from circular queue
void queue::del()
{
   if(front==-1) cout<<"\n circular queue is empty:";
    else
    {
       cout<<"deleting Book with followiing name,no and price :"<<B[front].Bname<<" "<<B[front].Bno<<" "<<B[front].price;
       if(front==rear) front=rear=-1;
       else if(front==size-1) front=0;
       else front++;
      }
}
// main function to test the class queue
void main()
{
 clrscr();
 int ch; queue q;
do
{ cout<<"\n   *** MENU  ***\n";
  cout<<"\n1.Insert\n 2.Delete \n 3.Disp\n 4.Exit\n enter your choice:";
   cin>>ch;
   switch(ch)
   {
     case 1:q.insert(); break;
     case 2:q.del();    break;
     case 3:q.disp();   break;
     case 4: exit(0);
    }
 }while(ch>=1 &&ch<=3);
}


