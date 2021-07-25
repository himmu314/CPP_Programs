//Program To Print The Sum Of The Series

#include<iostream.h>
#include<conio.h>


long int fact(int n)
{
 long int facto=1;
 while(n>0)
  facto*=n--;

  return facto;
}


void main()
{
 int n;
 clrscr();

 cout<<"\nEnter The No. Of Terms: ";
 cin>>n;

 float sum=0;

 cout<<"\nYour Series Is:\n";

 if(n>0)
 {
  sum++;
  cout<<"1";
 }

 for(int i=1;i<n;i++)
 {
  sum+=1.0/fact(i);
  cout<<" + 1/"<<fact(i);
 }

 cout<<" = "<<sum;

 getch();
}