/* Date : 23/6/15
   Program - __

   Write a program to find the row sum and column sum
   of a 2D array of size MxN */

#include<iostream.h>
#include<conio.h>

//finding row sum
void rsum(int a[][10],int m,int n,int rs[])
{
  for(int i=0;i<m;i++)
  {
    rs[i]=0;
    for(int j=0;j<n;j++)
    rs[i]+=a[i][j];
  }
}

 //finding column sum
void csum(int a[][10],int m,int n,int cs[])
{
  for(int j=0;j<n;j++)
  {
    cs[j]=0;
    for(int i=0;i<m;i++)
    cs[j]+=a[i][j];
  }
}

void print(int a[][10],int m,int n,int cs[],int rs[])
{
  cout<<endl<<"\nRow sum & Column sum along with the matrix :- \n";
  //printing row sum
  for(int i=0;i<m;i++)
   { cout<<endl;
     for(int j=0;j<n;j++)
     cout<<a[i][j]<<"  ";
     cout<<"   "<<rs[i];
   }
  //printing column sum
  cout<<endl<<endl;
  for(int j=0;j<n;j++)
   cout<<cs[j]<<"  ";
}

//reading matrix elements
void read(int a[][10],int m,int n)
{
  cout<<endl<<"enter matrix elements : "<<endl<<endl;
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
     cin>>a[i][j];
  cout<<"\nmatrix entered is :-\n";
  for(i=0;i<m;i++)
   { cout<<endl;
     for(int j=0;j<n;j++)
      cout<<a[i][j]<<" ";
   }
}

void main()
{
  clrscr();
  int m,n,a[10][10],rs[10],cs[10];
  cout<<"ROW and COLUMN sum :-\n";
  cout<<endl<<"enter matrix size : ";
  cin>>m>>n;

  read(a,m,n);
  rsum(a,m,n,rs);
  csum(a,m,n,cs);
  print(a,m,n,cs,rs);
  getch();
}


/*                                OUTPUT

ROW and COLUMN sum :-

enter matrix size : 2 2

enter matrix elements :

1 2 3 4

matrix entered is :-

1 2
3 4

Row sum & Column sum along with the matrix :-

1  2     3
3  4     7

4  6                                          */












