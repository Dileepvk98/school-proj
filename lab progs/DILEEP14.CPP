/* Date 14/10/2015
   Program 14

   Write a program to create a binary file named "student.dat" and 
   to delete a particular record and display the contents.       */ 

#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class student
{
  int rollno;
  char name[30];
  float m1,m2,m3,tm;
  public :
	  void getstud();
	  void calcstud();
	  void putstud();
	  int retrollno()
	  { return rollno; }
};
//function to input data
void student::getstud()
{
  cout<<"\nenter roll no. : ";  cin>>rollno;
  cout<<"enter name : ";      gets(name);
  cout<<"enter 3 marks : ";   cin>>m1>>m2>>m3;
}
//function to output student details
void student::putstud()
{
 cout<<"\nroll no. : "<<rollno<<endl;
 cout<<"name : "<<name<<endl;
 cout<<"total marks : "<<tm<<endl;
}
//function to read & display file contents
void disp()
{
 student s;
 cout<<"\nModified file :-\n";
 ifstream fdisp("student.dat",ios::binary);
 while(fdisp.read((char*)&s,sizeof(s)))
 { s.putstud(); }
 fdisp.close();
}
//function to calculate total mark
void student::calcstud()
{ tm=m1+m2+m3; }
//function to create a file write data
void create()
{
  student s; int n;
  cout<<"enter no. of records to enter : "; cin>>n;
  ofstream fout("student.dat",ios::binary);
  for(int i=0;i<n;i++)
   {
    s.getstud();
    s.calcstud();
    fout.write((char*)&s,sizeof(s));
   }
  fout.close();
}
//function to delete data from file
void del()
{
 student s; int r,flag; char ch1,ch2;
 do
 {
  ifstream fin("student.dat",ios::binary);
  ofstream fout("temp.dat",ios::binary);
  cout<<"\nenter the roll no. to delete : "; cin>>r;
  if(!fin) cout<<"\nfile not found !\n";
  else   //search for record & delete it.
  {
   while(fin.read((char*)&s,sizeof(s)))
   {
    flag=0;
    if(r==s.retrollno())
    {
     cout<<"\nconfirm deletion [y/n] : "; cin>>ch1;
     if(ch1=='y'||ch1=='Y') cout<<"\nDeleted ! \n";
     else fout.write((char*)&s,sizeof(s));
     flag=1;
    }
    else fout.write((char*)&s,sizeof(s));
   }
  }
   if(flag==0)  cout<<"\nRecord not found !\n";
   fin.close(); fout.close();
   remove("student.dat");
   rename("temp.dat","student.dat");
   disp();
   cout<<"\ndelete another record ? [y/n] : "; cin>>ch2;
 }while(ch2=='y'||ch2=='Y');
}
void main()
{
 clrscr();
 cout<<"Student Database :- \n\n";
 create();
 del();
 getch();
}

/*                          OUTPUT

Student Database :-

enter no. of records to enter : 2

enter roll no. : 12
enter name : abcd
enter 3 marks : 67 89 90

enter roll no. : 35
enter name : pqrs
enter 3 marks : 87 89 65

enter the roll no. to delete : 12

confirm deletion [y/n] : y

Deleted !

Modified file :-

roll no. : 35
name : pqrs
total marks : 241

delete another record ? [y/n] : n   */


