/* DATE 22/9/15
   PROGRAM - 9

   Write a program to create a file called TEXT1.txt and
   count the no. of digits,alphabets,consonants in the file */

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
//function to write data to the TEXT1.txt
void write()
{
  char str[1000];
  ofstream fout;
  fout.open("TEXT1.txt");
  cout<<"\n\n[press * to exit]\n\nEnter the string :- \n\n";
  cin.getline(str,999,'*');
  fout<<str;
  fout.close();
}

//function to read TEXT1.txt
void read()
{
  cout<<"\nReading from text1.txt...\n\n";
  ifstream fin;  char str[1000];
  fin.open("TEXT1.txt");
  while(!fin.eof())
  { fin>>str; cout<<str<<" "; }
  fin.close();
}
void count()
{
  char ch;
  int cd=0,cv=0,cc=0;
  ifstream fin;
  fin.open("TEXT1.txt");
  while(fin)
  {
    fin.get(ch);
    if(isdigit(ch)) cd++;
    else if(isalpha(ch))
    {
     switch(ch)
     {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':  cv++;  break;
      default :  cc++;  break;
     }
    }
    if(fin.eof())
      break;
   }
  cout<<endl<<"\nno. of digits : "<<cd;
  cout<<endl<<"no. of vowels : "<<cv;
  cout<<endl<<"no. of consonants : "<<cc;
}
void main()
{
  clrscr();
  cout<<endl<<"COUNT the no. of DIGITS,VOWELS";
  cout<<" & CONSONANTS in a file ";
  //function calls
  write();
  read();
  count();
  getch();
}

/*                    OUTPUT


COUNT the no. of DIGITS,VOWELS & CONSONANTS in a file

[press * to exit]

Enter the string :-

hello123qwerty*

Reading from text1.txt...

hello123qwerty

no. of digits : 3
no. of vowels : 3
no. of consonants : 8     */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                











