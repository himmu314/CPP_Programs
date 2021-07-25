//Program Of Constructor Overloading

#include<iostream.h>
#include<conio.h>

class x
{
 int a,b;
 public:
 x();
 x(int,int);
 x(x &);
 void show();
};

x::x()
{
 cout<<"\nDefault Constructor Is Called\n";
 a=5;
 b=10;
}

x::x(int p,int q)
{
 cout<<"\nParametrized Constructor Is Called\n";
 a=p;
 b=q;
}

x::x(x &p)
{
 cout<<"\nCopy Constructor Is Called\n";
 a=p.a;
 b=p.b;
}

void x::show()
{
 cout<<"a: "<<a<<"   b:"<<b<<endl;
}

void main()
{
 clrscr();
 int a,b;
 x p1;
 p1.show();

 cout<<"\nEnter The Value Of 'a' And 'b':\n";
 cin>>a>>b;
 x p2(a,b);
 p2.show();

 x p3(p2);
 p3.show();

 x p4=p2;  //Another Way Of Calling Copy Constructor
 p4.show();

 x p5;
 p5=p2; //Does Not Call Copy Constructor
	//But Legally Assign The Values To P5 Using Overloaded '=' Operator
 p5.show();


 //Another Way Of Calling The Constructor

 x p,q,r;  //Three Times Default Constructor Is Called
 p.show();

 q=x(a,b);  //Parametrized Constructor is Called
 q.show();

 r=x(q);     //No Copy Constructor Is Called,
	     //Values Are Given To 'r' By '=' Operator Overloading
 r.show();

 getch();
}