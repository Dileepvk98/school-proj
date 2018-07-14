/* Date :  14/7/15
   Program no. __

   Write a program to define a class bank with the following members
   private members: customer name string,acno float,balance long int,
   public members: void getbank(),void putbank(),void deposit(long int amt),
   void withdraw(long int amt),long int retaccno().Implement the above class
   for n customers.The user should select deposit or withdraw options for a
   transaction,after the transaction the account details should be displayed.
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

//class definition
class bank
{
  char cname[30];
  long int accno;
  float bal;

  public:
	 void getbank();
	 void putbank();
	 void deposit();
	 void withdraw();
	 long int retaccno();
};

//to return account no. of each customer while searching
long int bank::retaccno()
{ return accno; }

//to input details of n customers
void bank::getbank()
{
   cout<<"\nEnter customer name : ";
   gets(cname);
   cout<<"Enter account no. : ";
   cin>>accno;
   cout<<"Enter initial balance : ";
   cin>>bal;
}

//to calculate deposit amount and update balance
void bank::deposit()
{
  int amt=0;
  cout<<"\nenter deposit amount : ";
  cin>>amt;
  bal=bal+amt;
  cout<<"\nupdated balance = "<<bal;
}

//to calculate withdrawal amount and update balance
void bank::withdraw()
{
  int amt;
  cout<<"\nenter withdrawal amount : ";
  cin>>amt;
  if(amt>bal)
    cout<<"\nERROR : NOT ENOUGH BALANCE .\n";
  else
   { bal=bal-amt;
     cout<<"\nUPDATED balance = "<<bal; }
}

//to display output
void bank::putbank()
{
   cout<<"\ncustomer name : "<<cname;
   cout<<"\nac/no : "<<accno;
   cout<<"\nbalance : "<<bal;
}

void main()
{
 clrscr();
 long int amt;
 int n,x,acno;
 char ch;
 bank b[50];  //object of class bank

 cout<<"BANK\n-----\nEnter no. of customers : " ;
 cin>>n;
 for(int i=0;i<n;i++)
   b[i].getbank();

 do
  {
   cout<<"\nEnter the account no. to be used : ";
   cin>>acno;
   for(i=0;i<n;i++)
   {
    if(b[i].retaccno()==acno)
    {
     cout<<"\n1.DEPOSIT\t2.WITHDRAW\t3.DISPLAY\t4.EXIT";
     cout<<"\n\nEnter your choice : ";
     cin>>x;
     switch(x)
     {
      case 1:b[i].deposit();
	    break;
      case 2:b[i].withdraw();
	    break;
      case 3:b[i].putbank();
	    break;
      case 4:exit(0);
      default:cout<<"\nINVALID choice ! ";
     }
     break;
    }
   }
    if(i==n)
    cout<<"\nINVALID account no. ! ";
   cout<<"\n\nContinue ? [y/n] : "; cin>>ch;
  }while(ch=='y'||ch=='Y');
 getch();
}

/*                             OUTPUT

BANK
-----
Enter no. of customers : 2

Enter customer name : hari
Enter account no. : 12
Enter initial balance : 9000

Enter customer name : arjun
Enter account no. : 56
Enter initial balance : 8000

Enter the account no. to be used : 12

1.DEPOSIT       2.WITHDRAW      3.DISPLAY       4.EXIT

Enter your choice : 1

enter deposit amount : 5000

updated balance = 14000

Continue ? [y/n] : y

Enter the account no. to be used : 56

1.DEPOSIT       2.WITHDRAW      3.DISPLAY       4.EXIT

Enter your choice : 2

enter withdrawal amount : 7000

UPDATED balance = 1000

Continue ? [y/n] : y

Enter the account no. to be used : 56

1.DEPOSIT       2.WITHDRAW      3.DISPLAY       4.EXIT

Enter your choice : 3

customer name : arjun
ac/no : 56
balance : 1000

Continue ? [y/n] : n                   */











