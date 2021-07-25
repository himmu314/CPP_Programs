//Program Of Implementation Of Class

#include<iostream.h>
#include<conio.h>

class area
{
 float area,side;

 public:

 void getdata();
 float square();
 float cube();
};

void area::getdata()
{
 cout<<"\nEnter The length Of Side: ";
 cin>>side;
}

float area::square()
{
 return(side*side);
}

float area::cube()
{
 return(6*side*side);
}

void main()
{
 clrscr();
 area x;
 x.getdata();
 cout<<"\nSrea Of Square Is: "<<x.square();
 cout<<"\nArea Of Cube Is: "<<x.cube();

 getch();
}

