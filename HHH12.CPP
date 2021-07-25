//Program To Find The Power Of A No. Recursively

#include<iostream.h>
#include<conio.h>

long int find(int,int);

void main()
{
 clrscr();
 int n,p;

 cout<<"\nEnter The No.: ";
 cin>>n;
 cout<<"\nEnter The Power Of A No.: ";
 cin>>p;

 if(p>=0)
 {
  long int s;
  s=find(n,p);
  cout<<"\nThe Value Is: "<<s;
 }
 else
 {
  long int s;
  double t;
  p=-p;
  s=find(n,p);
  t=1.0/s;
  cout<<"\nThe Value Is: "<<t;
 }


 getch();
}

long int find(int n,int p)
{
 if(p==0)
  return 1;
 else
  return(n*find(n,p-1));
}


