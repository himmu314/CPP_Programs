//Page no. 306 FILE HANDLING(Removing The Extra Spaces)

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{

 clrscr();
 char ch;
 cout<<"\nEnter The Text\n";
 fstream file1;
 file1.open("File1.txt",ios::out|ios::in);

 cin.get(ch);
 while(ch!='\n')
 {
  file1.put(ch);
  cin.get(ch);
 }

 fstream file2;
 file2.open("File2.txt",ios::out|ios::in);

 char c='a'; //random value

 file1.seekg(0);
 while(file1)
 {
  file1.get(ch);

  if((c==ch)&&c==' ')
   continue;
  else
  {
   file2.put(ch);
   c=ch;
  }
 }

 file2.seekg(0);
 cout<<"\nContents Of New File:\n";
 while(file2)
 {
  file2.get(ch);
  cout<<ch;
 }

 cout<<"\nExit";
 getch();
}