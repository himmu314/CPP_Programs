//Program To Print The Series

#include<iostream.h>
#include<conio.h>
#include<math.h>


long int fact(int n)
{
 long int facto=1;

 while(n>0)
  facto*=n--;

  return facto;
}


void main()
{
 int x,n;
 clrscr();

 cout<<"\nEnter The Value Of 'X': ";
 cin>>x;
 cout<<"Enter The No. Of Terms: ";
 cin>>n;

 float sum=0;
 cout<<"\nYour Series Is:\n";

 if(n>0)
 {
  sum=x;
  cout<<x;
 }

 for(int i=2;i<n*2;i=i+=2)
 {
  sum+=((float)pow(x,i))/fact(i);
  cout<<" + "<<pow(x,i)<<"/"<<fact(i);
 }

 cout<<" = "<<sum;

 getch();
}