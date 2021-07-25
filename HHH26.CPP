//Program Of Implimenting The Desructor

#include<iostream.h>
#include<conio.h>

class x
{
 static int count;
 public:
 x()
 {
  count++;
  cout<<count<<" No. Object Is Created\n";

 }

 ~x()
 {
  cout<<count<<" No. Object IS Destroyed\n";
  count--;;
 }
};

int x::count=0;


void main()
{
 clrscr();
 x a1,a2,a3;

 {
  cout<<"\nEnter Into 1st Block\n";
  x a4;
 }
 cout<<"Outside The 1st Block\n\n";

 {
  cout<<"\nEnter Into 2nd Block\n";
  x a5;
 }
  cout<<"Outside The 2nd Block\n\n";

 x a6;

 getch();
}
