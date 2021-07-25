//Use Of Tamplates

#include<iostream.h>
#include<conio.h>

template <class T>

class add
{
 T a,b,c;
 public:

 void add::input()
{
 cout<<"Enter The Two No\n";
 cin>>a>>b;
}

void add::show()
{
 cout.precision(2);
 cout<<a<<" + "<<b<<" = "<<a+b;
}


 //void input();
 //void show();
};



void main()
{
 clrscr();
 add <int> a1;
 add <float> a2;

 cout<<"\nINT:-\n";
 a1.input();

 cout<<"\nFLOAT:-\n";
 a2.input();

 cout<<"\nAddition Of 1st Obj:-";
 a1.show();

 cout<<"\nAddition Of 2nd Obj:-";
 a2.show();

 getch();
}
