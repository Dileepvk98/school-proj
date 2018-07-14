/* Date : 23/6/15
   Program - __

   Write a menu driven program to find the
    1.sum of off diagonal elements
    2.sum of main diagonal elements
    3.transpose of a square matrix   */

#include<iostream.h>
#include<conio.h>
#include<process.h>

//finding sum of main diag
void mdiag(int a[][10],int m,int n)
{
  int i,j,sum=0;
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    if(i==j)
      sum+=a[i][j];
  cout<<"sum of main diag = "<<sum;
}

//finding summ of off diag
void offdiag(int a[][10],int m,int n)
{
   int i,j,sum=0;
   for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     if(i+j==m-1)
      sum+=a[i][j];
   cout<<"sum of off diag = " <<sum;
}

//finding transpose
void trans(int a[][10],int b[][10],int m,int n)
{
  int i,j;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     b[j][i]=a[i][j];
  for(i=0;i<m;i++)
   {
      cout<<endl;
      for(j=0;j<n;j++)
	cout<<b[i][j]<<"  ";
   }
}

//reading elements
void read(int a[][10],int m,int n)
{
  cout<<endl<<"enter matrix elements : \n"<<endl;
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      cin>>a[i][j];
}

void main()
{
  clrscr();
  int a[10][10],b[10][10],m,n,i,j,c;
  char ch;
    cout<<"\n\nMENU\n------\n\n";
    cout<<"1.sum of off diag\n2.sum of main diag\n";
    cout<<"3.Transpose\n4.Exit\n"<<endl<<"enter matrix size : ";
    cin>>m>>n;
    if(m!=n)
      cout<<"\nThe matrix is not a square matrix !\n";
    else
    {
      read(a,m,n);
      cout<<endl<<"entered matrix is : \n";
      for(i=0;i<m;i++)
       { cout<<endl;
	 for(j=0;j<n;j++)
	 cout<<a[i][j]<<"  ";
       }
    do
     {
      cout<<endl<<"\nenter choice : ";
      cin>>c;
      switch(c)
	{
	  case 1:offdiag(a,m,n); break;
	  case 2:mdiag(a,m,n);   break;
	  case 3:trans(a,b,m,n); break;
	  case 4:exit(0);
	  default:cout<<"Invalid choice ! \n";
	 }
	cout<<endl<<"\ndo you want to continue ? [y/n] : ";
	cin>>ch;
      }while(ch=='y'||ch=='Y');
    }
  getch();
}



/*                              OUTPUT

MENU
------

1.sum of off diag
2.sum of main diag
3.Transpose
4.Exit

enter matrix size : 2 2

enter matrix elements :

1 2 3 4

entered matrix is :

1  2
3  4

enter choice : 1
sum of off diag = 5

do you want to continue ? [y/n] : y

enter choice : 2
sum of main diag = 5

do you want to continue ? [y/n] : y

enter choice : 3

1  3
2  4

do you want to continue ? [y/n] : n      */










