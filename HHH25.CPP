//Program Of Adding Two Complex No. Using Constructor with Default Agrument

#include<iostream.h>
#include<conio.h>

class complex
{
 int r,i;
 public:

 complex(int real=0,int img=0)
 {
  cout<<"\nConstructor With Default Argument Is Called\n";

  r=real;
  i=img;
 }

 void add(complex &p,complex &q)
 {
  r=p.r+q.r;
  i=p.i+q.i;
 }

 void show()
 {
  cout<<r<<" + "<<i<<"i\n";
 }
};

void main()
{
 clrscr();
 complex p1(10);
 p1.show();

 complex p2(12,4);
 p2.show();

 complex p3;
 cout<<"Before Calling Add():\n";
 p3.show();

 p3.add(p1,p2);
 cout<<"\nAfter Calling Add():\n";
 p3.show();

 getch();
}