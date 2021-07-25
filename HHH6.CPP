//Program To Check That The No. Is Palindrome Or Not

#include<iostream.h>
#include<conio.h>

void main()
{
 long int num,rev=0,temp;
 int r;
 clrscr();

 cout<<"\nEnter The No: ";
 cin>>num;

 temp=num;
 while(num>0)
 {
  r=num%10;
  rev=rev*10+r;
  num=num/10;
 }

  if(temp==rev)
  cout<<"\nThe No. is Palindrome\n";
  else
  cout<<"\nThe No. Is Not A Palindrome\n";

  getch();
}