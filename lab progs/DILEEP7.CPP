/* Date : 7/8/15
   Program no: __

   A class student has the following memebrs :name,rollno,
   marks in 5 subjects,average marks.Public memebers void
   getstud(),void putstud(),int retrollno(),void assignstream()
   - assigns the following stream based on average marks :-

   Average marks    stream
     >=96           Electronics
     >=91           Mechanical
     >=86           Elecrical
     >=81           Computer science
     >=76           Chemical

   Write a program to read marks in 5 subjetc,calculate and display
   the details of a particular student whose rollno is read.
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
//class defintion
class student
{
  int rollno;
  char name[20],stream[20];
  float m[5],avg,tm;
  public:
	 void getstud();
	 void putstud();
	 void assignstream();
	 int retrollno();
};

//to return the searched roll no.
int student::retrollno()
{ return rollno; }

//inputting the details of n students
void student::getstud()
{
  cout<<"Enter roll no. : ";
  cin>>rollno;
  cout<<"Enter name : ";
  gets(name);
  for(int i=0;i<5;i++)
  {
   cout<<"Enter mark of subject "<<i+1<<": ";
   cin>>m[i];
  }
}

//assigning the stream based on the average marks
void student::assignstream()
{  tm=0;
   for(int i=0;i<5;i++)
    tm+=m[i];
   avg=tm/5;
   if(avg>=96)       strcpy(stream,"Electronics");
   else if(avg>=91)  strcpy(stream,"Mecahnical");
   else if(avg>=86)  strcpy(stream,"Computer Science");
   else if(avg>=81)  strcpy(stream,"Electrical");
   else if(avg>=76)  strcpy(stream,"Chemical");
   else strcpy(stream,"No stream available !.");
}

//displaying the output
void student::putstud()
{
  cout<<"\nRoll no. : "<<rollno;
  cout<<"\nName : "<<name;
  cout<<"\nAverage Marks : "<<avg;
  cout<<"\nStream assigned : "<<stream;
}

void main()
{
  clrscr();
  student s[50];  int n,rno,i;   char ch;
  cout<<"STUDENT : AVERAGE MARKS\n\n";
  cout<<"Enter the no. of students : "; cin>>n;
  for(i=0;i<n;i++)
    {
     cout<<"\nEnter details of student "<<i+1<<" :\n";
     s[i].getstud();
    }
  do
  {
   cout<<"\nEnter the roll no. to search for : "; cin>>rno;
   for(i=0;i<n;i++)
    if(s[i].retrollno()==rno)
      {
       s[i].assignstream();
       s[i].putstud();
      }
     else if(i==n) cout<<"\nEnter a valid rollno ! \n\n";
   cout<<"\nTry again for a different student ? [y/n] : ";
   cin>>ch;
  }while(ch=='y'||ch=='Y');
   getch();
}


/*                                  OUTPUT

STUDENT : AVERAGE MARKS

Enter the no. of students : 2

Enter details of student 1 :
Enter roll no. : 24
Enter name : hari
Enter mark of subject 1: 89
Enter mark of subject 2: 80
Enter mark of subject 3: 78
Enter mark of subject 4: 86
Enter mark of subject 5: 80

Enter details of student 2 :
Enter roll no. : 57
Enter name : anirudh
Enter mark of subject 1: 90
Enter mark of subject 2: 98
Enter mark of subject 3: 78
Enter mark of subject 4: 90
Enter mark of subject 5: 96

Enter the roll no. to search for : 57

Roll no. : 57
Name : anirudh
Average Marks : 90.400002
Stream assigned : Computer Science
Try again for a different student ? [y/n] : y

Enter the roll no. to search for : 24

Roll no. : 24
Name : hari
Average Marks : 82.599998
Stream assigned : Electrical
Try again for a different student ? [y/n] : n     */


