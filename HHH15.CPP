//Program To Convert The Binary No. Into The Decimal Form Using Recurrsion

#include<iostream.h>
#include<conio.h>
#include<math.h>

int decimal(long int);
int i=-1;


void main()
{
 clrscr();
 long int b;

 cout<<"\nEnter The Binary No. To Convert It Into Decimal: ";
 cin>>b;
 cout<<"\nThe Decimal Form Is: "<<decimal(b);

 getch();
}

int decimal(long int d)
{
 i++;
 if(d<1)
  return d;
 else
  return((d%10)*pow(2,i) + decimal(d/10));
}