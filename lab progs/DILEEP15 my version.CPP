/* Date :   /10/2015			        
   Program - 15

   Write a program to implement a stack as an integer
   array  and implement the following menu options
   (1) push an element 
   (2) pop an element 
   (3) display stack                        */

#include<iostream.h>
#include<conio.h>
const int size = 3;
class stack                                           
{
  int data[size],top;
  public:
	 stack()
	 { top=-1; }
	 void disp();
	 void push();
	 void pop();
};

void stack::disp()
{
 for(int i=top;i>=0;i--)
 cout<<data[i]<<"  ";
}

void stack::push()
{
 if(top==size-1) cout<<"stack overflow ";
 else
 {
  top++;
  cout<<"enter data : ";
  cin>>data[top];
 }
}

void stack::pop()
{
 if(top==-1) cout<<"stack empty ";
 else
 {
   cout<<"deleting..."<<data[top];
   top--;
 }
}

void main()
{
 clrscr();
 stack s;
 int ch; char c;
 do
 {
  cout<<"\n1.push\n2.pop\n3.disp\n\n::::: ";
  cin>>ch;
  switch(ch)
  {
   case 1:s.push(); break;
   case 2:s.pop(); break;
   case 3:s.disp(); break;
  }
  cout<<"\ncontinue ? [y/n] : "; cin>>c;
 }
 while(c=='y');
 getch();
}



