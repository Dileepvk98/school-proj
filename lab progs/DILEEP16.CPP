/* Date 30-10-2015
   Program 16

Write a program to implement linear queue as an integer array with the following 
menu options  
(1.)Add an item.     
(2.)Delete an item.  
(3.)Display the queue.  
(4.)Exit.                                             */

#include<iostream.h>
#include<conio.h>
#include<process.h>
const int size=20;
class queue
{
 int data[size];
 int front,rear;
 public:
	 queue() { front=rear=-1;}

	 void insert()
	 {
	  if(rear==size-1)
	    cout<<"queue is full ! \n";
	  else if(rear==-1)
	    front=rear=0;
	  else
	    rear++;
	  cout<<"\nenter data : ";
	  cin>>data[rear];
	 }

	 void del()
	 {
	  if(rear==-1)
	     cout<<"\nempty queue ! ";
	  else
	   {
	     cout<<"\ndeleting...  "<<data[front];
	     front++;
	   }
	 }

	 void disp()
	 {
	  cout<<"\nqueue : ";
	  for(int i=front;i<=rear;i++)
	   { cout<<data[i]<<" "; }
	 }
};
void main()
{
 clrscr();
 queue q;  int ch1; char ch2;
 do
 {
  cout<<"\n1.insert  2.delete  3.display  4.exit\n";
  cout<<"\nenter choice : "; cin>>ch1;
  switch(ch1)
  {
   case 1:q.insert();  break;
   case 2:q.del();  break;
   case 3:q.disp(); break;
   case 4:exit(0);
   default:cout<<"\ninvalid choice : ";
  }
  cout<<"\ncontinue ? : "; cin>>ch2;
 }while(ch2=='y');
 getch();
}