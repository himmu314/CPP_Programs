//Use of Multiple Tamplets

#include<iostream.h>
#include<conio.h>


template<class t1,class t2>
class show
{
 t1 a;
 t2 b;
 public:
 show(t1 x,t2 y)
 {
  a=x;
  b=y;
 }

 void display()
 {
  cout<<"\na: "<<a<<endl;
  cout<<"b: "<<b<<endl;
 }
};

void main()
{
 clrscr();
 show <int,float> a1(12,32.45);
 show <char,int> a2('W',23);
 show <float,int> a3(78.06,'Y');


 cout<<"\nTEST 1:-";
 a1.display();

 cout<<"\nTEST 2:-";
 a2.display();

 cout<<"\nTEST 3:-";
 a3.display();

 getch();
}