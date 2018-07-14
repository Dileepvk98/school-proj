/* Date 26-10-15
   Program 17

Write a program to implement stack as linked list to store the student details 
( rollno,name ,age)with following menu options (using structure)     
(1.)To push a node.                   
(2.)To pop a node.       
(3.)To display the node.  
(4.)To Exit.                               */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
struct student
{
 int rollno,age;
 char name[30];
 student*next;
};

student*top=NULL;

void push()
{
  student*newptr=new student;
  if(!newptr) cout<<"\nlow memory ! ";
  else
  {
   cout<<"\nenter roll no. ";    cin>>newptr->rollno;
   cout<<"enter age : ";       cin>>newptr->age;
   cout<<"ener name : ";       gets(newptr->name);
   newptr->next=top;
   top=newptr;
  }
}
void pop()
{
 student*save=top;
 if(top==NULL) cout<<"\nstack underflow   ";
 else
 {
  cout<<"\ndeleting...\n";
  cout<<"rollno : "<<top->rollno<<endl;
  cout<<"name : "<<top->name<<endl;
  cout<<"age : "<<top->age<<endl;
  top=top->next;
  delete save;
 }
}
void disp()
{
 student*ptr=top;
 while(ptr)
 {
  cout<<"\nrollno : "<<ptr->rollno<<endl;
  cout<<"name : "<<ptr->name<<endl;
  cout<<"age : "<<ptr->age<<endl;
  ptr=ptr->next;
 }
}
void main()
{
 clrscr();
 int ch1; char ch2;
 do
 {
  cout<<"LINKED stack \n\n1.push  2.pop  3.display  4.exit\n\n";
  cout<<"enter choice : ";  cin>>ch1;
  switch(ch1)
  {
   case 1:push();    break;
   case 2:pop();     break;
   case 3:disp();    break;
   case 4:exit(0);
   default:cout<<"\ninvalid option ! ";
  }
   cout<<"continue ? : ";
   cin>>ch2;
 }while(ch2=='y');
 getch();
}
