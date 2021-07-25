//Fubanic series

#include<conio.h>
#include<iostream.h>

void fab(int);

void main()
{
 int n;
 clrscr();

 cout<<"\nEnter The No: ";
 cin>>n;

 cout<<"\nFubanic Series:\n";
 int a=0,b=1,c;
 for(int i=0;i<n;i++)
 {
  cout<<a<<",";
  c=a+b;
  a=b;
  b=c;
 }

 cout<<"\b ";

 getch();
}