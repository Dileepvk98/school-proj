/* Date : 3/7/15
   Program no. __

   Write a program to define a structure called student with the following
   members : student no int,student name string, marks in 3 subjects float,
   total marks float.Implement the structure for n students using the
   function getdata(), calc(). Sort the array using bubble sort so as to
   arrange the total marks in descending order.   */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//structure body
struct student
{
  int s_no;
  float tm,m1,m2,m3;
  char name[20];
};

//sorting the data in descending order of total marks
void bsort(student s[],int n)
{ int i,j,flag=1; student temp;
  for(i=0;i<n&&flag;i++)
  {
    flag=0;
    for(int j=0;j<n-i-1;j++)
    if(s[j].tm<s[j+1].tm)
    {
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
    } flag=1;
  }
}

//reading data
void getdata(student s[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<"\nStudent "<<i+1<<" : ";
    cout<<"\nenter name : " ;
    gets(s[i].name);
    cout<<"enter student no. : ";
    cin>>s[i].s_no;
    cout<<"enter marks in 3 subjects : \n";
    cin>>s[i].m1>>s[i].m2>>s[i].m3;
  }
}

//printing output
void print(student s[],int n)
{ cout<<"___________________________________________" ;
  cout<<"\n\nRANK LIST \n\n";
  for(int i=0;i<n;i++)
  {
    cout<<i+1<<".name : ";
    cout<<s[i].name<<endl;
    cout<<"  student no. : ";
    cout<<s[i].s_no<<endl;
    cout<<"  total marks : ";
    cout<<s[i].tm<<endl<<endl;
  }
}

//calculating total marks
void calc(student s[],int n)
{
  for(int i=0;i<n;i++)
   s[i].tm=s[i].m1+s[i].m2+s[i].m3;
}

void main()
{
  clrscr();
  int a[30],n;  char ch;
  student s[50],m1,m2,m3,tm,s_no;
  do
  {
    cout<<"\n\nStudent Rank list :-\n\n";
    cout<<"\nenter no. of students : ";
    cin>>n;
    if(n==0) cout<<"\nERROR : NO DATA AVAILABLE !\n\n";
    else
    { //function calls
     getdata(s,n);
     calc(s,n);
     bsort(s,n);
     print(s,n);
    }
     cout<<"do you want to try again ? [y/n] : ";
     cin>>ch;
  }while(ch=='y'||ch=='Y');
 getch();
}


/*                              OUTPUT


Student Rank list :-

enter no. of students : 3

Student 1 :
enter name : ganesh
enter student no. : 1
enter marks in 3 subjects :
89
78
90

Student 2 :
enter name : hari
enter student no. : 4
enter marks in 3 subjects :
23
90
88

Student 3 :
enter name : mohan
enter student no. : 21
enter marks in 3 subjects :
56
67
95
___________________________________________

RANK LIST

1.name : ganesh
  student no. : 1
  total marks : 257

2.name : mohan
  student no. : 21
  total marks : 218

3.name : hari
  student no. : 4
  total marks : 201

do you want to try again ? [y/n] : n             */

