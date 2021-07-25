//Program To Print Three no. In ascending order

#include<iostream.h>
#include<conio.h>

void main()
{
 int a,b,c,l;
 clrscr();

 cout<<"\nEnter The Three No.:\n";
 cin>>a>>b>>c;

 if(a>b)
  {
   if(a<c)
   {
   l=c;
   c=a;
   a=l;
   }
  }
  else
  {
   if(b>c)
    {
    l=b;
    b=a;
    a=l;
    }
   else
   {
    l=c;
    c=a;
    a=l;
   }
  }

  if(c>b)
  {
   l=c;
   c=b;
   b=l;
  }

  cout<<"Largest: "<<a<<"\nMiddle: "<<b<<"\nSmallest: "<<c;

  getch();
}