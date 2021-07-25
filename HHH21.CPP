#include<iostream.h>
#include<conio.h>

class complex
{
 float n,i;

 public:

 void getdata();
 void display();
 complex operator +(complex p)
 {
  p.n+=n;
  p.i+=i;

  return p;
 }
};

void complex::getdata()
{
 cout<<"\nEnter The Real No.: ";
 cin>>n;
 cout<<"Enter The Imaginary No.: ";
 cin>>i;
}

void complex::display()
{
 cout<<n<<"+"<<i<<"i\n";
}

void main()
{
 clrscr();
 complex a,b,c;
 cout<<"\nFor 1st Complex No.:-";
 a.getdata();
 cout<<"\nFor 2nd complex No.:-";
 b.getdata();

 c=a+b;

 cout<<"\n1st Complex No: ";
 a.display();
 cout<<"\n2nd Complex No: ";
 b.display();
 cout<<"\n3rd Complex No: ";
 c.display();

 getch();
}