//Program Of Swaping Using Call By Refrence

#include<iostream.h>
#include<conio.h>

void swap(int &,int &);

void main()
{
 clrscr();
 int n1,n2;
 cout<<"\nEnter The Two No.\n";
 cin>>n1>>n2;

 cout<<"\nValues Of N1 And N2 Before Calling Swap Function\n";
 cout<<"N1: "<<n1<<"    N2: "<<n2;
 swap(n1,n2);
 cout<<"\n\nValues Of N1 And N2 After Calling Swap Function\n";
 cout<<"N1: "<<n1<<"    N2: "<<n2;

 getch();
}


void swap(int &a,int &b)
{
 int j;
 j=a;
 a=b;
 b=j;
}

