/* Date - 9/10/2015
   Program  12

   Write a program to create a binary file telephone.dat with n
   records in it.Display the details of the subscriber using
   telephone no. as the search key.			       */

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct DOB
{ int dd,mm,yyyy; };

class telephone
{
  char name[30],addr[50],phno[11];
   DOB dob;
  public:
	 void getdata();
	 void dispdata();
	 char* retphone()
	 { return phno; }
};
//function to create telephone.dat
void create()
{
  ofstream fout("telephone.dat",ios::binary);
  int n;
  telephone t;
  cout<<"enter no. of records : ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    t.getdata();
    fout.write((char*)&t,sizeof(t));
  }
   fout.close();
}
//function to read data from user.
void telephone::getdata()
{
  cout<<"\nenter customer name : ";   gets(name);
  cout<<"enter phone no. : ";         gets(phno);
  cout<<"enter address : ";           gets(addr);
  cout<<"enter dob : ";
  cin>>dob.dd>>dob.mm>>dob.yyyy;
}
//function to display output.
void telephone::dispdata()
{
 cout<<"\nseacrh result : \n\n";
 cout<<"Name : "<<name<<endl;
 cout<<"Address : "<<addr<<endl;
 cout<<"Phone no. : "<<phno<<endl;
 cout<<"DOB : ";
 cout<<dob.dd<<" "<<dob.mm<<" "<<dob.yyyy<<endl;
}
//function to search for a record.
void search()
{
  telephone t;
  char tels[11],ch;  int flag;
  do
  {
   ifstream fin("telephone.dat",ios::binary);
   if(!fin) cout<<"File not found ! ";
   else
   {
    cout<<"\nenter the phone no. to search : ";
    gets(tels);  flag=0;
    while(fin.read((char*)&t,sizeof(t)))
    {
     if(strcmpi(t.retphone(),tels)==0)
      {
	t.dispdata();
	flag=1; //break;
      }
      if(flag==0)  cout<<"\nRecord not found ! \n";
     }cout<<"\ncontinue ? [y/n] : "; cin>>ch;
    }fin.close();
 }while(ch=='y'||ch=='Y');
}

void main()
{
 clrscr();
 cout<<"Telephone Directory \n\n";
 create();
 search();
 getch();
}

/*                      OUTPUT

Telephone Directory

enter no. of records : 2

enter customer name : hari
enter phone no. : 1234567890
enter address : kaloor
enter dob : 1 1 1998

enter customer name : anirudh
enter phone no. : 9876543210
enter address : thrikkakkara
enter dob : 2 2 1998

enter the phone no. to search : 1234567890

seacrh result :

Name : hari
Address : kaloor
Phone no. : 1234567890
DOB : 1 1 1998

continue ? [y/n] : y

Name : anirudh
Address : thrikkakkara
Phone no. : 9876543210
DOB : 2 2 1998           */



