#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>

class shop
{
  float tot_price,price;    int no_items;
  static tax;
  public:
	 void buy();
	 void bill();
	 void calc();
	 void enter_details();
	 void read_details();
};
static tax=15;

class customer:public shop
{ int cno,mob;              char cname[40],addr[50];
  public:

	 void modify_details();
};

void customer::enter_details()
{
  ofstream fout("custdt.txt",ios::app);
  cout<<"\nenter cno : ";       cin>>cno;
  cout<<"enter name : ";        gets(cname);
  cout<<"enter addr : ";        gets(addr);
  cout<<"enter mob no. : ";     cin>>mob;
  fout<<cno<<cname<<addr<<mob;
  fout.close();
}


/*void shop::buy()
{ int ch;
  cout<<"\nchoose the product to buy ";
  cout<<"\n1.TV\t2.Mobile\t3.PC\n\n";
  cout<<"enter your choice : ";  cin>>ch;
  switch(ch)
  {
    case 1:cout<<"TV\n---\n";
	   int d; cout<<"\n1. 32'inch\n2. 42'inch\n3. 52'inch\n";
	   cout<<"4. cancel\n\nchoose the display size : ";
	   cin>>d;
	   switch(d)
	   {
	    case 1:cout<<"price = 32,000\nadd to cart [y/n] ?";
		   char yn;cin>>yn;
		   if(yn=='y'||yn=='Y')
		   tot_price=32000;
		   break;
	    case 2: */


