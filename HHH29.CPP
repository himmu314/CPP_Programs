//Program To Impliment All Three Types Of TYPE CONVERSIONS Using Operator Overloading

#include<iostream.h>
#include<conio.h>

class con2; //Forward Declaration

class con1
{

  int n1;
  public:

  con1()
  { n1=0; }

  void getdata()
  { cin>>n1; }

  operator int()
  {
   return(n1);
  }


  operator con2()
  {
   con2 x;
   x.n2=n1;
   return(x);
  }

  void show()
  {
   cout<<n1<<endl;
  }
};


class con2
{
 float n2;
 public:

 con2()
 { n2=0; }

 con2(con1 x)
 {
  n2=x.n1;
 }

 void getdata()
 { cin>>n2; }

 operator int()
 { return(n2); }

};

void main()
{
  clrscr();
  con1 x;
  x.getdata();
  x.show();

  int n=x;
  cout<<"\nN: "<<n;
  getch();
}