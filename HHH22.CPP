//Program Of String Mainupulation Using Operator Overloading

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class str
{
 char ch[30];
 public:

 void getdata();
 void display();

 str operator +(str p)
 {
  str x;
  strcpy(x.ch,ch);
  strcat(x.ch,p.ch);

  return x;
 }

 int operator ==(str p)
 {
  if(strcmp(ch,p.ch)==0)
   return 1;
  else
   return 0;
 }
};

void str::getdata()
{
 cout<<"\nEnter The String: ";
 gets(ch);
}

void str::display()
{
 cout<<ch;
}


void main()
{
 clrscr();
 str a,b,c;
 cout<<"\n1st String:-";
 a.getdata();
 cout<<"2nd String:-";
 b.getdata();

 if(a==b)
  cout<<"\nString 1st And String 2nd Are Equal\n";
 else
  cout<<"\nString 1st And String 2nd Are Not Equal\n";

  c=a+b;
  cout<<"Sum Of 1st And 2nd String Is: ";
  c.display();

  getch();
}
