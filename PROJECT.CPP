/////////////////////////////////////////////////////////////////////////////
//               Project codename : K.A.D  COMPUTERS
/////////////////////////////////////////////////////////////////////////////
//                              HEADER FILES
/////////////////////////////////////////////////////////////////////////////
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//                                CLASSES
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
class item
{
  protected:
	    char itemname[30],modelno[20],itemcode[20];
	    float price;
  public:
	  void read_item();
	  void disp_item();
	  char* retcode()      { return itemcode; }
	  float retprice()     { return price; }
	  char* retitemname()  { return itemname; }
	  char* retmodel()     { return modelno; }
};
//---------------------------------------------------------------------------
class admin: public item
{
  public:
	 void add_item();
	 void del_item();
	 void modify_item();
}a;
//---------------------------------------------------------------------------
class customer: public item
{
 protected:
	   char itemc[20];
 public:
	   void place_order();
}c;
//###########################################################################
//                                GRAPHICS
//###########################################################################

//-------------------------------BLUE LOADBAR--------------------------------
void loading()
{
  clrscr();
  int gm,gd=DETECT;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  cleardevice();
  rectangle(129,230,471,240);
  setfillstyle(SOLID_FILL,BLUE);
  outtextxy(280,215,"Loading");
  for(int i=230;i<=470;i+=10)
  {
    delay(20);
    outtextxy(283,215,".");
    bar(130,231,i,239);
  }
  closegraph();
}
//----------------------------------WELCOME LOADBAR---------------------------
void welcome_loadbar()
{
  clrscr();
  int gm,gd=DETECT;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  cleardevice();
  settextstyle(0,HORIZ_DIR,3);
  outtextxy(20,50,"WELCOME TO KAD COMPUTERS");
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(280,213,"Loading");
  setfillstyle(SOLID_FILL,10);
  for(int i=230;i<=470;i+=5)
  {
    delay(20);
    bar(130,231,i,239);
  }
 closegraph();
}
//----------------------------WELCOME SCREEN + LOGIN-------------------------
void welcome()
{
 clrscr();
 char str[10];
 int k=0,flag=0;
 while(k<3)
 {
   gotoxy(30,12);
   textcolor(RED);
   cprintf("Enter Password :  ");
   for(int i=0;i<5;i++)
     {
       str[i]=getch();
       cout<<"*";
     } str[i]='\0';

   if((strcmp(str,"admin")==0))
   {
     closegraph();
     clrscr();
     gotoxy(30,12);
     textcolor(CYAN);
     cprintf("LOADING DATABASE\n");
     for(int i=0;i<17;i++)
     {
       delay(20);
       gotoxy(30+i,13);
       textcolor(i+1);
       cprintf("-");
     }
     flag=1; break;
   }
   else
    {
      closegraph();
      clrscr();
      cout<<"\n\n\t\t\t      Wrong password !  \n";
      cout<<"\n\t\t\tPlease re-enter the password";
      flag=0;  k++;
    }
 }
 if(flag==0)
 {
   closegraph();
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\tExiting... ! Bye \n";
   getch();
   exit(0);
 }
}
//--------------------------------MENU LIST----------------------------------
void menu_list()
{
  clrscr();
  textcolor(12);
  gotoxy(35,2); cprintf(" MENU");
  gotoxy(35,3); cprintf(" ----");
  textcolor(9);
  gotoxy(30,6);  cprintf("1.Add a new item\n");
  gotoxy(30,8);  cprintf("2.Delete an item\n");
  gotoxy(30,10); cprintf("3.Modify an item\n");
  gotoxy(30,12); cprintf("4.Display all products\n");
  gotoxy(30,14); cprintf("5.Place an order\n");
  gotoxy(30,16); cprintf("6.Help\n");
  gotoxy(30,18); cprintf("7.More Info ");
  gotoxy(30,20); cprintf("8.Exit\n");
}
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//                                 FUNCTIONS
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

//-------------	---------------------READ-------------------------------------
void item::read_item()
{
  item t; int flag=0;
  char newcode[20];
  cout<<"Enter item name : ";        gets(itemname);
  cout<<"Enter model name. : ";      cin>>modelno;
  cout<<"Enter price : ";            cin>>price;
  cout<<"Enter item code : ";        cin>>itemcode;

  ifstream fin("itemdata.dat",ios::binary);
  while(fin.read((char*)&t,sizeof(t)))
  {
   if(strcmpi(itemcode,t.retcode())==0)
    { flag=1; break; }
  }
  if(flag==1)
  {
    textcolor(RED+BLINK);
    cprintf("\nItem Code already used !");
    cout<<endl;
    textcolor(LIGHTRED);
    cprintf("\nEnter a different Code : ");
    cin>>newcode;
    strcpy(itemcode,newcode);
  }
 fin.close();
}
//---------------------------------DISPLAY-----------------------------------
void item::disp_item()
{
  clrscr();
  loading();
  item t;
  ifstream fin("itemdata.dat",ios::binary);
  if(!fin)
     cout<<"\n itemdata.dat is corrupted / not found !\n";
  else
  {
    cout<<"\t\t\t\t";
    textcolor(YELLOW);
    cprintf("PRODUCT INFO");
    cout<<"\n";
    for(int c=0;c<80;c++) cout<<"=";
    cout<<"S.No\t"<<"Code"<<setw(20)<<"Product Name";
    cout<<setw(20)<<"Model Name"<<setw(20)<<"Rate\n";
    for(c=0;c<80;c++) cout<<"=";  c=0;
    while(fin.read((char*)this,sizeof(*this)))
    {
      c++;
      cout<<c<<"\t"<<itemcode<<setw(20)<<itemname<<setw(20)<<modelno;
      cout<<setw(20)<<price<<endl;
    }
    for(c=0;c<80;c++) cout<<"=";
  }
  fin.close();
}
//-----------------------------------ADD-------------------------------------
void admin::add_item()
{
 item t;  char ch;
 loading();
 do
 {
    ofstream fout("itemdata.dat",ios::app|ios::binary);
    textcolor(LIGHTBLUE);
    cprintf("\nAdd new item :- "); cout<<endl;
    t.read_item();
    fout.write((char*)&t,sizeof(t));
    textcolor(GREEN);
    cprintf("\nItem Added ");
    cout<<"\nAdd another item  ? [y/n] : ";
    cin>>ch;
    fout.close();

 }while(ch=='y'||ch=='Y');
 textcolor(15);
}
//------------------------------------DELETE---------------------------------
void admin::del_item()
{
  disp_item();
  textcolor(CYAN);
  cprintf("\nDeletion menu :-\n");
  item t; int flag=0;
  char icode[20],ch;
  do
  {
   ifstream fin("itemdata.dat",ios::binary );
   if(!fin)
     cout<<"\n itemdata.dat is corrupted / not found !\n";
   else
   {
    ofstream fout("tempitem.dat",ios::binary );
    cout<<"\nEnter item CODE to delete : ";
    cin>>icode;
    while(fin.read((char*)&t,sizeof(t)))
    {
      if((strcmpi(t.retcode(),icode))==0)
       {
	 flag=1;
	 textcolor(GREEN);
	 cprintf("\nItem [ ");cout<<icode;cprintf(" ] Deleted !");
       }
       else fout.write((char*)&t,sizeof(t));
    }
    if(flag==0)
    {
      textcolor(12);
      cprintf("\nInvalid item code ! ");
    }
    fout.close(); fin.close();
    remove("itemdata.dat");
    rename("tempitem.dat","itemdata.dat");
    cout<<"\n\nDelete another item [y/n]  ?  : ";
    cin>>ch;
   }

  }while(ch=='y'||ch=='Y');
 textcolor(15);
}
//----------------------------------MODIFY-----------------------------------
void admin::modify_item()
{
  disp_item();
  textcolor(LIGHTRED);
  cprintf("\nModification menu :- ");
  item t; int flag=0;
  char icode[20],ch;
  do
  {
    cout<<"\n\nEnter item CODE to modify : " ;   cin>>icode;
    ifstream fin("itemdata.dat",ios::binary);
    if(!fin)
      cout<<"\n itemdata.dat is corrupted / not found !\n";
    else
    {
      ofstream fout("tempitem.dat",ios::binary);
      while(fin.read((char*)&t,sizeof(t)))
      {
	if((strcmpi(t.retcode(),icode))==0)
	{
	 flag=1;
	 cout<<"Enter new details : \n";
	 t.read_item();
	 fout.write((char*)&t,sizeof(t));
	 textcolor(GREEN);
	 cprintf("\nModification of data successful");
	}
	else fout.write((char*)&t,sizeof(t));
      }
     if(flag==0)
     {
       textcolor(12);
       cprintf("Invalid item code ! ");
     }
     fout.close(); fin.close();
     remove("itemdata.dat");
     rename("tempitem.dat","itemdata.dat");
   }
   cout<<"\n\nModify another item ? [y/n] : ";
   cin>>ch;

 }while(ch=='y'||ch=='Y');
}
//--------------------------------PRINT BILL---------------------------------
void printbill(float total, int qty[20])
{
 clrscr();
 randomize();
 textcolor(7);
 cout<<"\t\t\t\tKAD ELECTRONICS\n";
 for(int i=0;i<80;i++)  cout<<"-";
 cout<<"Tel: 2123456"<<setw(30);
 cout<<"Mob: 9123456789,9987654321\n";
 cout<<"Email: kadelectro@email.com"<<setw(20);
 cout<<"\nInvoice no. : inv"<<random(10000)+1000<<endl;
 for(i=0;i<80;i++)  cout<<"-";
 gotoxy(35,7);
 cprintf("INVOICE");
 cout<<endl;
 for(int c=0;c<80;c++)
 cout<<"="; c=0;

 ifstream fin("bill.dat",ios::binary);
 if(!fin) cout<<"\n bill.dat is corrupted / not found !\n";
 cout<<"S.No\t"<<"Code"<<setw(20)<<"Product Name";
 cout<<setw(20)<<"Model Name"<<setw(15)<<"Rate"<<setw(10)<<"Qty\n";
 for(i=0;i<80;i++)  cout<<"=";
 item e;i=0;
 while( fin.read((char*)&e,sizeof(e)))                                             
  {
   c++;
   cout<<" "<<c<<"\t"<<e.retcode()<<setw(18)<<e.retitemname()<<setw(20);
   cout<<e.retmodel()<<setw(16)<<e.retprice()<<setw(9)<<qty[i]<<endl;
   i++;
   if(fin.eof())
     break;
  }
 for(i=0;i<80;i++)  cout<<"=";
 cout<<"\t\t\t\tTOTAL = "<<total<<endl;
 for(i=0;i<80;i++)  cout<<"=";
 fin.close();
}
//-------------------------------PLACE ORDER---------------------------------
void customer::place_order()
{
 int flag=0,qty[20];
 float total=0;
 char ch1,ch2;
 item t;
 for(int i=0;i<80;i++)  cout<<"=";
 disp_item();
 textcolor(RED+BLINK);
 cprintf("Place your order :- ");
 cout<<endl;
 for(i=0;i<80;i++)  cout<<"=";
 ofstream fout("bill.dat",ios::binary);
 i=0;
 do
 {
   cout<<"Enter the item CODE of item to purchase : ";
   cin>>itemc;
   flag=0;
   ifstream fin("itemdata.dat",ios::binary);
   while(fin.read((char*)&t,sizeof(t)))
   {
     if((strcmpi(t.retcode(),itemc))==0)
     {
       cout<<"Enter quantity : ";  cin>>qty[i];
       total+=t.retprice()*qty[i];
       fout.write((char*)&t,sizeof(t));
       flag=1;
       i++;
     }
   }
  fin.close();
  if(flag==0)   cout<<"Invalid item code ! ";
  cout<<"\nPuchase another item ? [y/n] : ";  cin>>ch1;

 }while(ch1=='y'||ch1=='Y');
 fout.close();
 textcolor(15);
 printbill(total,qty);
}
//----------------------------------HELP--------------------------------------
void help()
{
 gotoxy(30,3);
 cprintf("HELP");
 cout<<"\n\n* Max no. of items that can be added : 15 \n\n";
 cout<<"* An item can only be deleted by the admin. \n\n";
 cout<<"* All details of a product (including itemcode) can";
 cout<<" be modified \n  (only by the admin) in the modification menu.";
 cout<<"\n\n* An item can only be added by the admin.\n\n";
}
//------------------------------FUNCTION ACCESS-------------------------------
int func_access()
{
 clrscr();
 char str[10];
 int flag=0;
 gotoxy(15,12);
 cprintf("Enter Password to access this operation :  ");
 for(int i=0;i<10;i++)
 {
   str[i]=getch();
   cout<<"*";
 }
 str[i]='\0';
 if((strcmp(str,"superadmin")==0))
   flag=1;
 else
   flag=0;
 return flag;
}
//-----------------------------------INFO------------------------------------
void info()
{
 gotoxy(30,3);
 cprintf("WARRANTY / GUARANTEE  |  REFUND INFO");
 cout<<"\n\n* Warranty/Guarantee cards will be provided/inside the ";
 cout<<"package.\n\n* Warranty/Guarantee will not be applicable for ";
 cout<<"physical damage\n\n* No Refunds\n";
 cout<<"\n\n\n\Contact info :- \n\nTel:2123456";
 cout<<"\nMob : 9123456789 , 9987654321";
 cout<<"\nEmail : kadelectro@email.com\n\n\n";
}
/////////////////////////////////////////////////////////////////////////////
//                               MAIN FUNCTION
/////////////////////////////////////////////////////////////////////////////
void main()
{
 clrscr();
 int ch1,f; char ch2;
 welcome_loadbar();
 welcome();
  do
  {
    menu_list();
    textcolor(15);
    gotoxy(30,22);
    cprintf("Enter your choice : ");
    cin>>ch1;
    clrscr();
    switch(ch1)
    {
      case 1: f=func_access();
	      if(f==0)
	      {
		clrscr();
		textcolor(12);
		cprintf("\n\nWrong Password");
		cout<<"\n\n[Press any key]\n";
		getch();
		break;
	      }
	      a.add_item(); cout<<endl<<endl;
	      clrscr();
	      break;
      case 2:f=func_access();
	     if(f==0)
	      {
		clrscr();
		cout<<"\n\nWrong Password\n\n";
		cout<<"Press any key to continue\n";
		getch();
		break;
	      }
	     a.del_item(); cout<<endl<<endl;
	     break;
      case 3:f=func_access();
	     if(f==0)
	      {
		clrscr();
		cout<<"\n\nWrong Password\n\n";
		cout<<"Press any key to continue\n";
		getch();
		break;
	      }
	     a.modify_item(); cout<<endl<<endl;
	     break;
      case 4:c.disp_item();       
             break;
      case 5:c.place_order();
	     break;
      case 6:help();
	     break;
      case 7:info();
	     break;
      case 8:exit(0);
      default:cout<<"\nINVALID CHOICE !";
    }
    cout<<"\nReturn to main menu ? [y/n] : ";  cin>>ch2;
  }while(ch2=='y'||ch2=='Y');
}
/////////////////////////////////////////////////////////////////////////////
//*************************************************************************//
//                               END OF PROJECT
//*************************************************************************//
//                  Group members : Karthik, Aaditya, Dileep
/////////////////////////////////////////////////////////////////////////////