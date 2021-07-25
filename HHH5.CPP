//Program to Find The HCF and LCM Of Two Number

#include<iostream.h>
#include<conio.h>

void main()
{
 int n1,n2,c;
 clrscr();

 cout<<"\nEnter The Two No.\n";
 cin>>n1>>n2;

 int a=n1,b=n2;
 c=a%b;

 while(c)
 {
  a=b;
  b=c;
  c=a%b;
 }
 cout<<"\nHCF: "<<b<<"\nLCM: "<<(n1*n2)/b;

 getch();
}