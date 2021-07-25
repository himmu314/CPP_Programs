//Program To Find The GCD Of Two No.

#include<iostream.h>
#include<conio.h>

int gcd(int,int);

void main()
{
 int n1,n2;
 clrscr();

 cout<<"\nEnter The Two NO. To Find There GCD:\n";
 cin>>n1>>n2;
 cout<<"\nThe GCD Of "<<n1<<" and "<<n2<<" is: "<<gcd(n1,n2);

 getch();
}

int gcd(int n1,int n2)
{
 if((n1%n2)==0)
  return n2;
 else
 gcd(n2,n1%n2);
}