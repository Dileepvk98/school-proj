/* Date 26/10/15
   Program - 16

   Write a program to implement linear queue
   as integer array  with following option
   1.Insert  2.Delete  3.Display  4.Exit

Source code:          */

#include<iostream.h>
#include<process.h>
#include<conio.h>
const int size=10;

// Defining a class Queue
class queue
{
 int data[size],front ,rear;
 public:
	queue() {front=rear= -1;}
	void insert();
	void del();
	void disp();
};
// function to insert an item into queue
void queue::insert()
{
    if(rear==size-1) cout<<"\n queue is full:";
     else
     {
      if(rear==-1) front=rear=0;
      else rear++;
       cout<<"enter data:";
       cin>>data[rear];
     }
}
// function to display queue
void queue::disp()
{
   if(front==size-1)  cout<<"\n Queue is empty:";
   else
    {
     cout<<"Queue:";
     for(int i=front;i<=rear;i++)
     cout<<data[i]<<" ";
   }
}
// function to delete an item
void queue::del()
{
   if(front==-1) cout<<"Queue is empty:";
    else
    {
       cout<<"\n deleting:"<<data[front];
       if(front==rear) front=rear=-1;
       else  front++;
    }
}
// main function
void main()
{
 clrscr();
 int ch; queue q;
 do
 {
   cout<<"\n1.Insert\t2.Delete\t3.Display\t4.Exit";
   cout<<"\n\nenter your choice :";
   cin>>ch;
   switch(ch)
   {
     case 1: q.insert(); break;
     case 2: q.del();    break;
     case 3: q.disp();   break;
      case 4: exit(0);
    }
 }while(ch>=1 &&ch<=3);
}
