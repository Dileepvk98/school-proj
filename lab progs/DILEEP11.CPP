/* Date - 12/10/2015
   Program  11

   Write a program to create a text file and reverse
   each line of text and display it.                 */

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
//function to write the string to a file
void write_file()
{
  char a[1000];
  ofstream fout("revtxt.txt");
  cout<<"enter the string [press * to stop] : ";
  cin.getline(a,999,'*');
  fout<<a;
  fout.close();
}
//function to read and display the reverse string
void read_disp()
{
  char a[1000];
  ifstream fin("revtxt.txt");
  fin.getline(a,999,'\n');
  cout<<"Reversed text : \n\n"<<strrev(a);
  fin.close();
}

void main()
{
 clrscr();
 write_file();  //function calls
 read_disp();
 getch();
}

/*                        OUTPUT

enter the string [press * to stop] : hello c++ abcd*

Reversed text :

dcba ++c olleh    */
















































