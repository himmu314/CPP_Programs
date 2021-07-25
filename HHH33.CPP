//Program To Impliment The Virtual Base Class Concept

#include<iostream.h>
#include<conio.h>

class shape
{
 protected:
 float a,b;

 public:
 void getdata(float x,float y)
 {
  a=x;
  b=y;
 }

 virtual void display() { }
};


class triangle:public shape
{
 public:
 void display()
 {
  cout<<"Area Of Triangle: "<<0.5*a*b;
 }
};


class rectangle: public shape
{
 public:
 void display()
 {
  cout<<"\nArea Of Rectangle: "<<a*b;
 }
};


void main()
{
 clrscr();
 triangle x;
 rectangle y;
 float a,b;


 cout<<"\nEnter The Two Lengths:\n";
 cin>>a>>b;
 x.getdata(a,b);
 y.getdata(a,b);

 cout<<"\nArea Of The Figures:\n";
 x.display();
 y.display();

 getch();
}