/* Date: 3/11/15
   Program: 18

  Write a program to Implement a dynamic stack of books using class.
  Include following menu options
  1.Push  2.Pop   3.Disp  4.Exit

Source Code:                                           */
#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
struct Book
 {
     int bno;
     char bname[20];
      float price;
     Book *link;
} ;
class stack
{
  Book *top;
  public:
	 stack() { top=NULL; }
	 void push();
	 void pop();
	 void disp();
	 ~stack();
};
 void stack::push()
 {
    Book *newptr=new Book;
     if(!newptr) cout<<" not enough memory:";
  else
    {
      cout<<"enter bno,name and price:";
      cin>>newptr->bno;
       gets(newptr->bname);
       cin>>newptr->price;
	  newptr->link=top;
	  top=newptr;
    }
}
void stack::pop()
{
     Book *save=top;
       if(top==NULL)  cout<<"\nStack under flow:";
  else
   {  cout<<"\ndeleting"<<top->bno<<top->bname<<top->price;;
      save=top;
      top=top->link;
       delete save;
   }
}
stack::~stack()
{
  Book *ptr=top;
  while(ptr)
  {
    top=top->link;
    delete ptr ;
    ptr=top;
   }
}
void stack::disp()
{
     Book *ptr=top;
     while(ptr)
     {  cout<<ptr->bno<<" "<<ptr->bname<<" "<<ptr->price<<"-->\n";
	ptr=ptr->link;
     }

}
void main()
{
 clrscr();
 int ch; stack s;
do
{  cout<<"\n1.Push\n 2.Pop \n 3.Disp\n 4.Exit\nEnter your choice:";
   cin>>ch;
   switch(ch)
   {
     case 1:s.push();  break;
     case 2:s.pop();   break;
     case 3:s.disp();  break;
     case 4: exit(0);
    }
 }while(ch>=1 &&ch<=3);
}




