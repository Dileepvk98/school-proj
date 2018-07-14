/* Date: 26/10/15
   PROGRAM: 17

   Write a program to imlement dynamic stack as linked list to store
   student's details(rollno,name,score) with the following menu options.
   1.Push  2. Pop   3. Display  4. exit.

Source Code:                */

#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
// Declaration of structure student
struct student
 {
   int admo;
   char name[20];
   float score;
   student *next;
} ;
student *top=NULL;
// function to implement insertion into stack
void PUSH()
{
  student * newptr=new student;

   if(!newptr) cout<<" not enough memory:";
  else
    {
      cout<<"\n Enter Admission no,name,score of the student:";
      cin>>newptr->admo;
      gets(newptr->name);
      cin>>newptr->score;
      newptr->next=top;
      top=newptr;
    }
}
// function to implement deletion from stack
void POP( )
{
     student *ptr=top;
   if(top==NULL) cout<<"Stack under flow:";
  else
   {
      cout<<"deleting student with following data";
      cout<<top->admo<<" "<<top->name<<" "<<top->score;
      ptr=top;
      top=top->next;
      delete ptr;
   }
}
// function to implement display
void disp()
{
     student *ptr=top;
     if(top==NULL)  cout<<"\n stack is empty;";
     while(ptr)
     {
	cout<<"Admision no="<<ptr->admo<<"\n";
	cout<<"Name="<<ptr->name<<"\n";
	cout<<"score="<<ptr->score<<"\n";
	ptr=ptr->next;
     }
}
// Main function
void main()
{
 clrscr();
 int ch;
do
{   cout<<"\n ***  MENU  ****\n";
   cout<<"\n1.Push\t2.Pop\t3.Display\t4.Exit\nEnter your choice:";
   cin>>ch;
   switch(ch)
   {
     case 1:PUSH();   break;
     case 2:POP();    break;
     case 3:disp();   break;
     case 4:exit(0);
    }
  }while(ch>=1 &&ch<=3);
}






