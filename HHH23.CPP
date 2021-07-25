//Program Of Implimenting the Constructor

#include<iostream.h>
#include<conio.h>

class x
{
 int a,b;
 public:

 x()
 {
  a=10;
  b=15;
 }

 void change()
 {
  a+=5;
  b+=5;
 }

 void show()
 {
  cout<<"a: "<<a<<"   b: "<<b<<endl;
 }

};

void main()
{
 clrscr();
 x p;
 cout<<"\nBefore Calling 'change()' Fumction Of Class x:\n";
 p.show();
 p.change();
 cout<<"\nAfter Calling 'change()' Fumction Of Class x:\n";
 p.show();

 getch();
}