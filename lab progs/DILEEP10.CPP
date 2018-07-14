/* Date - 6/10/2015
   Program 10

   Write a program to create a text file and replace every occurrence
   of letter "A" with "*". Display the cntents of the text file after
   modification.                                                    */

#include<fstream.h>
#include<conio.h>
#include<stdio.h>

//function to create and write data
void writefile()
{ char a[1000];
  ofstream fout("Astar.txt");
  cout<<"enter any text : \n[press * to exit ]\n\n";
  cin.getline(a,999,'*');
  fout<<a;
  fout.close();
}

//function to modify "A" to "*"
void modify()
{
  char ch;
  ifstream fin("Astar.txt");
  ofstream fout("temp.txt");
  while(fin.get(ch))
  {
    if(ch=='A') ch='*';
    fout<<ch;
  }
  fin.close();   fout.close();
  remove("Astar.txt");
  rename("temp.txt","Astar.txt");
}

//function to display output
void disp()
{
  char ch;
  ifstream fin("Astar.txt");
  cout<<"\nModified text :- \n";
  while(fin.get(ch))
  { cout<<ch; }
}

void main()
{ 
  clrscr();
  //function calls
  writefile();
  modify();
  disp();
  getch();
}

/*                           OUTPUT

enter any text :
[press * to exit ]

Abcd abcd hAlo*

Modified text :-
*bcd abcd h*lo      */



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
