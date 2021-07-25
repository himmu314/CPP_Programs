//Program Of Implimenting Function Overloading Using Sum Of Two No.

#include<iostream.h>
#include<conio.h>

int sum(int,int);
float sum(int,float);
float sum(float,float);

void main()
{
 clrscr();
 float a,b;

 cout<<"\nEnter The Two Floating Point No.:\n";
 cin>>a>>b;
 cout<<"\nSum: "<<sum(a,b);
 cout<<"\nSum: "<<sum(int(a),b);
 cout<<"\nSum: "<<sum(int(a),int(b));

 getch();
}

int sum(int a,int b)
{
 cout<<"\n\nCalling Function: sum(int,int)";
 return(a+b);
}

float sum(int a,float b)
{
 cout<<"\n\nCalling Function: sum(int,float)";
 return(a+b);
}

float sum(float a,float b)
{
 cout<<"\n\nCalling Function: sum(float,float)";
 return(a+b);
}