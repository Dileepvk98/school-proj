/* Date 15/9/15
   Program - 8

   Write a program to perform various operations on s string
   class without using built in functions.The member functions
   should read,display,reverse and concatenate the string.  */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
class string
{ char str[80];
  int l,l1,l2;
  public:
	 void rev();
	 void concat(string);
	 void read();
	 void revdisp();
	 void concatdisp();
	 void disp();
};

//function to read data
void string::read()
{  cout<<"\nenter the string : ";   gets(str);  }

//function to display output
void string::revdisp()
{
  cout<<"\n\nreversed string : ";
  for(int i=0;i<l;i++)   cout<<str[i];
}

void string::concatdisp()
{
  cout<<"\n\nconcatenated word : ";
  for(int i=0;i<l1+l2;i++)  cout<<str[i];
}

void string::disp()
{
  cout<<"\n\nreversed string : ";
  for(int i=0;i<l;i++)   cout<<str[i];
  cout<<"\n\nconcatenated word : ";
  for( i=0;i<l1+l2;i++)  cout<<str[i];
}

//function to reverse a string
void string::rev()
{
  int i,j;  char temp; l=0;
  for(i=0;str[i]!='\0';i++)  l++;
  for(i=0,j=l-1;i<l/2;i++,j--)
  {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
}

//function to concatenate 2 words
void string::concat(string s2)
{
  char temp[20];
  l1=l2=0;
  for(int i=0;str[i]!='\0';i++)      l1++;
  for(int j=0;s2.str[j]!='\0';j++)   l2++;
  for(int x=0;x<l2;x++)
    str[l1+x]=s2.str[x];
  str[l1+l2]='\0';
}

void main()
{
  clrscr();
  string s,s2;    int ch;  char c;
  cout<<"Reverse & Concatenate two strings\n\n";
  s.read();
  do
  {
   cout<<"MENU\n\n1.reverse\n";
   cout<<"2.concatenate\n3.display\n4.exit ";
   cout<<"\n\nenter the choice : "; cin>>ch;
   switch(ch)
   {
    case 3: s.disp();
	    break;
    case 1: s.rev();
	    s.revdisp();
	    break;
    case 2: s2.read();
	    s.concat(s2);
	    s.concatdisp();
	    break;
    case 4: exit(0);
    default:cout<<"invalid choice !\n";
   }
     cout<<"\ndo you want to continue [y/n] ? ";
     cin>>c;
  }while(c=='y'||c=='Y');
 getch();
}


/*                            OUTPUT

Reverse & Concatenate two strings

enter the string : hello

MENU

1.reverse
2.concatenate
3.display
4.exit

enter the choice : 1

reversed string : olleh

do you want to continue [y/n] ? : y

MENU

1.reverse
2.concatenate
3.display
4.exit

enter the choice : 2

enter the string : c++

concatenated word : ollehc++

do you want to continue [y/n] ? : y

MENU

1.reverse
2.concatenate
3.display
4.exit

enter the choice : 3

reversed string : olleh

concatenated word : ollehc++

do you want to continue [y/n] ? : n  	*/








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
