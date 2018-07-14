/* Date : 23/6/15
   Program - __

   Write a menu program to read 2 arrays in ascending order and merge
   them to form a 3rd array in descending order, print the array and
   implement binary search to find the position of a particular item
   in an array.   */

#include<iostream.h>
#include<conio.h>
#include<process.h>

//merging 2 arrays
void mergeAAD(int a[],int b[],int c[],int m,int n)
{
  int i=m-1,j=n-1,k=0;
  while(i>=0&&j>=0)
  { if(a[i]>b[j])
    c[k++]=a[i--];
    else
    c[k++]=b[j--];
  }
  while(i>=0) c[k++]=a[i--];
  while(j>=0) c[k++]=b[j--];
}

//printing merged array
void printAAD(int c[],int k)
{
  int i,j;
  cout<<endl<<"merged array  : ";
  for(i=0;i<k;i++) cout<<" "<<c[i];
}

//binary search process
int bs(int c[],int item,int k)
{
  int i,j,beg=0,end=k-1,mid,pos=0;
  while(beg<=end)
  {
    mid=(beg+end)/2;
    if(c[mid]==item)
    { pos=mid+1; break;}
    else if(c[mid]<item)
    end=mid-1;
    else beg=mid+1;
  }
 return pos;
}

void main()
{
 clrscr();
 int i,j,x,m,n,k,a[20],b[20],c[40],item;    char ch;
 do
 {
   cout<<"\nMENU\n------ \n\n1.Merge 2 arrays in descending order\n";
   cout<<"2.Search for an element from the 2 arrays\n3.exit\n";
   cout<<endl<<"enter your choice : ";
   cin>>x;
   if(x>3||x<1) cout<<"invalid choice ! ";
   else if(x==3) exit(0);
   else
   {
    cout<<endl<<"enter array 1 size : ";
    cin>>m;
    cout<<endl<<"enter array 1 elements in ascending order: "<<endl;
     for(i=0;i<m;i++)
      cin>>a[i];
    cout<<endl<<"enter array 2 size : ";
    cin>>n;
    cout<<endl<<"enter array 2 elements in ascending : "<<endl;
     for(j=0;j<n;j++)
      cin>>b[j];

    mergeAAD(a,b,c,m,n);
    k=m+n;
    switch(x)
    {
      case 1:printAAD(c,k);
	   break;
      case 2:cout<<endl<<"enter item to search for : ";
	   cin>>item;
	   printAAD(c,k);
	   int p=bs(c,item,k);
	   if(p==0) cout<<endl<<"search failed ";
	   else cout<<endl<<"position of "<<item<<" is "<<p;
	   break;
      default:cout<<"invalid choice ! \n ";
    }
     cout<<endl<<endl<<"do you want to try again ? [y/n] : ";
     cin>>ch;
   }
  } while(ch=='y'||ch=='Y');
 getch();
}




/*                                OUTPUT



MENU
------

1.Merge 2 arrays in descending order
2.Search for an element from the 2 arrays
3.exit

enter your choice : 1

enter array 1 size : 3

enter array 1 elements in ascending order:
2 4 7

enter array 2 size : 4

enter array 2 elements in ascending :
1 4 6 8

merged array  :  8 7 6 4 4 2 1

do you want to try again ? [y/n] : y

MENU
------

1.Merge 2 arrays in descending order
2.Search for an element from the 2 arrays
3.exit

enter your choice : 2

enter array 1 size : 3

enter array 1 elements in ascending order:
1 4 5

enter array 2 size : 4

enter array 2 elements in ascending :
5 6 7 8

enter item to search for : 4

merged array  :  8 7 6 5 5 4 1
position of 4 is 6

do you want to try again ? [y/n] : n                 */




