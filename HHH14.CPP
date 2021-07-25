//Program To Convert The Decimal No. Into Binary No. Recursively

#include<iostream.h>
#include<conio.h>

long int binary(int);

void main()
{
 clrscr();
 int n;

 cout<<"\nEnter The To Find Its Binary Value: ";
 cin>>n;
 cout<<"\nBinary Form Is: "<<binary(n);

 getch();
}

long int binary(int n)
{
 if(n<=0)
  return n;
 else
   {
    return(n%2 + 10*(binary(n/2)));
   }
}