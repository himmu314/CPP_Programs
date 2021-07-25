#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip.h>


class bank
{
 char name[30],acctype;
 long int accnum,balance;

 public:

 void init();
 void des();
 void with();
 void dis();

};

void bank::init()
{
 cout<<"Enter The Name: ";
 gets(name);
 X:
 cout<<"\nEnter The Account Type:\n1. Saving\n2. Current\n:- ";
 cin>>acctype;
 if((acctype==1||acctype==2))
  {
   cout<<"\nWrong Input\nPlease Re-Enter:-";
   goto X;
  }

 accnum=240543000000;
 accnum+=rand()%10000000;

 cout<<"Enter The Balance: ";
 cin>>balance;

 getch();
}


void bank::des()
{
 int temp;
 cout<<"\nYour Currrent Balance is: "<<balance<<endl;
 cout<<"Enter The Amount To Deposite\n:- ";
 cin>>temp;

 if(temp<1)
  cout<<"\nYou Can Not Enter This Amount\n";
 else
 {
  balance+=temp;
  cout<<"Thank You\nYour Current Balance Is Now: "<<balance;
 }
 getch();
}


void bank::with()
{
 int temp;
 cout<<"\nYour Current Balance Is: "<<balance;
 cout<<"\nEnter The Amount To Withdraw\n:- ";
 cin>>temp;

 if(temp<1)
  cout<<"\nYou Can Not Withdraw This Minimum Amount\n";
 else
 {
  if(balance>temp)
  {
   cout<<"Transaction Is Completed\n";
   balance-=temp;
   cout<<"\nNow Current Balance Is: "<<balance;
  }
  else
   cout<<"\nYou Have Not Enough Money\n";

 }
 getch();
}

void bank::dis()
{
 cout<<"\nName Of Account Holder: "<<setw(30)<<name;
 cout<<"\nAccount No."<<setw(44)<<accnum;
 cout<<"\nCurrent Balance: "<<setw(30)<<balance<<endl;

 getch();
}


void main()
{
 clrscr();
 int n;
 bank x;

 cout<<"Open An Account:-\n\n";
 x.init();

 while(1)
 {
   clrscr();
   cout<<"\n1. Deposite Money\n2. Withdraw Money\n3. Display Information\n4. Exit\n:- ";
   cin>>n;
   switch(n)
   {
    case 1: x.des(); break;
    case 2: x.with(); break;
    case 3: x.dis(); break;
    case 4: return;
    default: cout<<"\nWrong Entry:  Please Re-Enter\n";
   }
 }
}