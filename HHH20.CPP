//Program To Find The Maximum No In Two Classes Using FRIEND Function

#include<iostream.h>
#include<conio.h>

class y;

class x
{
 int n;

 public:
 friend int comp(x,y);
 void getdata()
 {
  cout<<"\nEnter The No. For CLASS X: ";
  cin>>n;
 }
};

class y
{
 int n;

 public:
 friend comp(x,y);
 void getdata()
 {
  cout<<"Enter The No. For CLASS Y: ";
  cin>>n;
 }
};

 int comp(x n1,y n2)
 {
   if(n1.n>n2.n)
    return (n1.n);
   else
    return (n2.n);
 }

 void main()
 {
  clrscr();
  x a;
  y b;
  a.getdata();
  b.getdata();
  cout<<"\n Maximum No. Is: "<<comp(a,b);

  getch();
 }