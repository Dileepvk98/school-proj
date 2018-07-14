/* Date: 3/11/15
   PROGRAM:19

   Write a program to implement a linked queue of students using
   class with following members: rollno,name,mark and member
   functions to add a node,delete a node,diplay linked queue.

Source code:                                                */
#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
// Declaring structure student
struct student
 {  int rno;
    char name[20];
    float mark;
    student *link;
} ;
// Class Definition
class queue
{
    student *front,*rear;
    public:
     queue(){ rear=front=NULL;}
     void Insert();
     void Del();
     void Disp();
};
// memeber function to add a node to linked list
void queue::Insert()
{
    student *newptr=new student;
     if(!newptr) cout<<" not enough memory:";
  else
    {
      cout<<"enter Rollno,Name and Mark:";
      cin>>newptr->rno;
       gets(newptr->name);
       cin>>newptr->mark;
	if(rear==NULL)  front=rear=newptr;
	 else
	 {
	  rear->link=newptr;
	  rear=newptr;
	}
     }
}
// member function to delete a node from linked queue
void queue::Del()
{
     student *save=front;
       if(front==NULL) cout<<"\nQueue is empty:";
  else
   {  cout<<"\ndeleting"<<front->rno<<front->name<<front->mark;
      if(front==rear) front=rear=NULL;
      else
       front=front->link;
       delete save;
   }
}
// memeber function to display linked queue
void queue::Disp()
{
     student *ptr=front;
      if(front==NULL) cout<<"\n Queue is empty:";
     while(ptr)
     {  cout<<ptr->rno<<" "<<ptr->name<<" "<<ptr->mark<<"-->\n";
	ptr=ptr->link;
     }

}
// main function

void main()
{
 clrscr();
 int ch; queue q;
do
{
    cout<<"\n\n **** MENU  ***\n";
    cout<<"\n1. Insert\n 2.Delete \n 3.Disp\n 4.Exit\n Enter your choice:";
   cin>>ch;
   switch(ch)
   {
     case 1: q.Insert();  break;
     case 2: q.Del();     break;
     case 3: q.Disp();    break;
     case 4: exit(0);
    }
 }while(ch>=1 &&ch<=3);
}




