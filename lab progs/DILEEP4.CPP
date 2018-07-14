/* Date : 25/6/15
   Program - __

   Write a program to implement function overloading to find
   the area of :
    1.trianlge
    2.rectangle
    3.circle

   After reading the sides of the triangle,it should be checked
   whether they form a triangle,if not display a proper error
   message.                                                     */

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<math.h>

//calculating area of triangle
void area123(float a,float b,float c)
{
  if(a+b>c&&b+c>a&&a+c>b)
  {
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<endl<<"area of triangle = "<<area;
  }
  else
   cout<<"Triangle cannot be formed ! ";
}

//calculating area of rectangle
void area123(float a,float b)
{
  float area=a*b;
  cout<<endl<<"area of rectangle = "<<area;
}

//calculating area of circle
void area123(float a)
{
  float area=a*a*3.14;
  cout<<endl<<"area of circle = "<<area;
}

void main()
{
  clrscr();
  int ch;
  float a,b,c,ar;   char x;
  do
  {
    cout<<"\nFIND THE AREA OF :- \n\n";
    cout<<"1.triangle\n2.rectangle\n3.circle\n4.exit\n\n";
    cout<<"enter choice : ";
    cin>>ch;
    switch(ch)
    {
     case 1:cout<<"\nenter sides of trianlge : ";
	    cin>>a>>b>>c;
	    area123(a,b,c);
	    break;
     case 2:cout<<"\nenter sides of the rectangle: ";
	    cin>>a>>b;
	    area123(a,b);
	    break;
     case 3:cout<<"\nenter radius of circle : ";
	    cin>>a;
	    area123(a);
	    break;
     case 4:exit(0);
     default:cout<<"\nInvlaid choice ! ";
    }
    cout<<"\n\ndo you want to continue ? [y/n] : ";
    cin>>x;
  }while(x=='y'||x=='Y');
 getch();
}



/*                                  OUTPUT



FIND THE AREA OF :-

1.triangle
2.rectangle
3.circle
4.exit

enter choice : 1

enter sides of triangle : 4
5
6

area of triangle = 9.921567

do you want to continue ? [y/n] : y

FIND THE AREA OF :-

1.triangle
2.rectangle
3.circle
4.exit

enter choice : 2

enter sides of the rectangle: 5
6

area of rectangle = 30

do you want to continue ? [y/n] : y


FIND THE AREA OF :-

1.triangle
2.rectangle
3.circle
4.exit

enter choice : 3

enter radius of circle : 4.5

area of circle = 63.584999

do you want to continue ? [y/n] : n       */














                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
