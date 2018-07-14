#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>
#include<graphics.h>

class consumer
{
	char cname[20],adress[20];
	int cno,a,b,c; float i;
	public:
		void entry();
		void case_1();
		void display();
		int rcno()
	        { return cno; }
}c;
   //CLASS DEFINITION ENDING
	void consumer::entry()   //FUNCTION TO ENTER THE VALUES
	{
	 clrscr();
	 gotoxy(32,4);   cout<<"ELECTRONICS";
	 gotoxy(5,8);    cout<<"Customer ID :";
	 gotoxy(5,10);   cout<<"Customer name :";
	 gotoxy(5,12);   cout<<"Customer address :";
	 gotoxy(5,14);   cout<<"Customer Service number :";
	 gotoxy(5,16);   cout<<"Costumer Smart card number :";
	 gotoxy(5,18);   cout<<"Costumer Phone number :";
	 gotoxy(5,20);   cout<<"Customer Bill number :";
	 gotoxy(45,8);   cin>>cno;
	 gotoxy(45,10);  gets(cname);
	 gotoxy(45,12);  gets(adress);
	 gotoxy(45,14);  cin>>a;
	 gotoxy(45,16);  cin>>b;
	 gotoxy(45,18);  cin>>c;
	 gotoxy(45,20);  cin>>i;
	}
    void consumer::display()
    {
	   cout<<"\n\n";
	   gotoxy(5,8);  cout<<"Customer ID : "<<cno;
	   gotoxy(5,10); cout<<"Customer name : "<<cname;
	   gotoxy(5,12); cout<<"Customer address :"<<adress;
       gotoxy(5,14); cout<<"Customer Service number :" <<a;
	   gotoxy(5,16); cout<<"Costumer Smart card number :"<<b;
	   gotoxy(5,18); cout<<"Costumer Phone number :"<<c;
	   gotoxy(5,20); cout<<"Customer Bill number :"<<i<<"\n";
    }
    void write()   //FUNCTION TO WRITE THE VALUES
	{
		char ch;  consumer c;
		fstream f1;
		c.entry();
		f1.open("main.dat",ios::app|ios::binary);
		cout<<"\n\n\tDO you want to save the record(y/n)\t";
		cin>>ch;
		if(ch=='y')
		f1.write((char*)&c,sizeof(c));
		f1.close();
	}

    void read()  //FUNCTION TO READ THE VALUES
	{
	    char ch;  consumer c;
		fstream f1;
		f1.open("main.dat",ios::in|ios::binary);
		while(!f1.eof())
		{
		  f1.read((char*)&c,sizeof(c));
		  c.display();
		}
		f1.close();
	}
    void search()    //FUNCTION FOR SEARCHING THE RECORD
	{
     consumer c; int rn;
     char found='n';
	ifstream f1("main.dat",ios::in);
	cout<<"\n\n Enter Customer ID you want to SEARCH :\t";
	cin>>rn;
	while(!f1.eof())
	{
	 f1.read((char*)&c,sizeof(c));
	 if(c.rcno()==rn)
	  {
	   c.display();
	   found='y';
	   break;
	  }
	}
	if(found=='n')
	cout<<"\n\n\tRECORD NOT FOUND ! \n"<<endl;
	f1.close();
     }
    void del() //FUNCTION TO DELELTE THE RECORD
	{
       ifstream f1("main.dat",ios::in);
       ofstream f2("temp.dat",ios::out);
       int rno; char found='f',confirm='n';
       cout<<"\n\n Enter Customer ID you want to DELETE :\t";
       cin>>rno;
       while(!f1.eof())
	{
	 f1.read((char*)&c,sizeof(c));
	 if(c.rcno()==rno)
	  {
	    c.display();
	    found='t';
	    cout<<"\n\n Are you sure want to DELETE this record ? (y/n)\t";
	    cin>>confirm;
	    if(confirm=='n') cout<<"Deleting ... ";
	  }
	 else  f2.write((char*)&c,sizeof(c));
	}
       if(found=='f') cout<<"\n\n\tRECORD NOT FOUND\n";
       f1.close(); f2.close();
       remove("main.dat");
       rename("temp.dat","main.dat");
       f1.open("main.dat",ios::in);
       clrscr();
       cout<<"\n\n\n Now the file contains\n\n\n";
       while(!f1.eof())
       {
	 f1.read((char*)&c,sizeof(c));
	 if(f1.eof())  c.display();
       }
      f1.close();
    }
    void update()   //FUNCTION TO MODIFY THE RECORD
    {
	fstream f1("main.dat",ios::in | ios::out | ios::binary);
	int rno;   long pos;   char found='f';
	cout<<"\n\n Enter the Customer ID you want to MODIFY :\t";
	cin>>rno;
	while(!f1.eof())
	{
		pos=f1.tellg();
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rno)
		{
			c.entry();
			f1.seekg(pos);
			f1.write((char*)&c,sizeof(c));
			found='t';
			break;
		}
	}
	if(found=='f')
	cout<<"\n\n\tRECORD NOT FOUND\n";
	f1.seekg(0);
	clrscr();
	cout<<"\n Now the file contains\n\n";
	c.display();
	f1.close();
	getch();
    }
    void main() //STARTING OF THE VOID MAIN
	{
	char str[10];
	 unsigned int sum,add,d,j,e,f,g,h,k,l,w,x,y,z,choice;
	// WELCOME SCREEN
	clrscr();
	lab:;
	clrscr();
	pass:;
	cout<<"\n\t\tPASSWORD DOES NOT CONTAINS ANY NUMBER\n\n\n";
	cout<<"\n\n\t\t\tEnter your Password\t";
	for(int i=0;i<5;i++)
	{ str[i]=getch();  cout<<"*"; }
	str[i]='\0';
	  if((strcmp(str,"admin")==0))
	{
	  cout<<"\n\n\n\t\tPLEASE WAIT WHILE LOADING THE PROJECT";
	  for(int i=0;i<10;i++)
	  {  delay(150); cout<<"."; }
	}
	else
	{
	 cout<<"\n\n\t\t\t Ooop's wrong password !\n";
	 cout<<"\n\n\t\t\t Please re-enter the password \n";
	 getch();
	 k++;
	 if(k==3)
	 {
	  cout<<"\nExiting from the project!!!!! Bye\n";
	  getch(); exit(0);
	 }
	 goto pass;
	}clrscr();
	//DETAILS OF THIS PROJECT
	//LOADING THE PROJECT
	gotoxy(32,13);cout<<"********************";
	gotoxy(32,15);cout<<"LOADING YOUR PROJECT";
	gotoxy(32,17);cout<<"********************";
	gotoxy(32,20);cout<<"PLEASE WAIT.........";
	delay(300);
	gotoxy(32,19); cout<<"COMPLETED ";
	for(i=0;i<=100;i++)
	   {
		clrscr();
		gotoxy(32,13); cout<<"********************";
		gotoxy(32,15); cout<<"LOADING YOUR PROJECT";
		gotoxy(32,17); cout<<"********************";
		gotoxy(32,20); cout<<"PLEASE WAIT.........";
		gotoxy(32,19); cout<<"COMPLETED  ";
		delay(50);
		gotoxy(32,35); cout<<i<<" % ";
		delay(50);

	// TO PURCHASE ,SEARCH ,MODIFY ,DELETE ,DISPLAY ALL RECORDS ,DETAILS ,NEW CUSTOMER
	char con[4];
	again:;
	clrscr();
	cout<<"\n\n\n\t\t\t***********************************";
	cout<<"\n\n\t\t\t*     1.NEW CUSTOMER              *";
	cout<<"\n\n\t\t\t*     2.DETAILS                   *";
	cout<<"\n\n\t\t\t*     3.SEARCH A RECORD           *";
	cout<<"\n\n\t\t\t*     4.DELETE A RECORD           *";
	cout<<"\n\n\t\t\t*     5.MODIFY A RECORD           *";
	cout<<"\n\n\t\t\t*     6.DISPLAY ALL RECORDS       *";
	cout<<"\n\n\t\t\t*     7.QUANTITY AVAILABLE        *";
	cout<<"\n\n\t\t\t*     0.EXIT                      *\n";
	cout<<"\n\t\t\t************************************";
	cout<<"\n\n\n\n\t Enter your choice :\t";
	cin>>d;
	int flagi=1;
   do
	{
	switch(d)
	{
	case 1 :
		break;
	case 2 :
		break;
	case 3: //TO SEARCH THE RECORDS
		clrscr();
		search();
		break;
	case 4: //TO DELETE THE RECORDS
		clrscr();
		del();
		break;
	case 5: //TO MODIFY THE RECORDS
	       clrscr();
	       update();
	       break;
	case 6://TO DISPLAY ALL SAVED RECORDS
		clrscr();
		read();
		break;
	case 7 :
		break;
	case 0 :
		break;
	default : cout<<"potta choice ! ";


	}
 }while(flagi==0);
}
}
    //END OF VOID MAIN . END OF COMPUTERS DIRECTORY
