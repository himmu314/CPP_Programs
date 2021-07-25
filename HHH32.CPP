#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class acc
{
 char aname[30],type;
 long int accno;
 public:
 void getdata(char);
 void putdata();
};


void acc::getdata(char ch)
{
 cout<<"\nEnter The Name: ";
 gets(aname);
 type=ch;
 cout<<"Enter The Account No.: ";
 cin>>accno;
}

void acc::putdata()
{
 cout<<"\nDetails Of Account Holder:\n";
 cout<<"Name: "<<aname;
 cout<<"\nAcc. No.: "<<accno;;
 cout<<"\nAcc. Type: "<<type<<endl;
}



class cur_acc:public acc
{
  float balance;
  public:
  void add(int);
  void less(int);
  void get(char);
  void put();
  int penality();
  void check();
};

void cur_acc::get(char ch)
{
 getdata(ch);
 cout<<"\nMinimum Balance In Acc.: 10,000\n";
 cout<<"\nEnter The Balance: ";
 cin>>balance;
}

void cur_acc::put()
{
 putdata();
 cout<<"Current Balance: "<<balance<<endl;
}

void cur_acc::add(int n)
{
 balance+=n;
 cout<<"\nTransaction Succesful\n";
 put();
}

void cur_acc::less(int n)
{
 if(n>balance)
  cout<<"\nNot Enough Money\n";
  else
  {
   cout<<"\nTransaction Succesful\n";
   balance-=n;
  }
}

 int cur_acc::penality()
 {
  if(balance<10000)
   return 100;
  else
   return 0;
 }

 void cur_acc::check()
 {
  int n;
  n=penality();
  if(n!=0)
   {
    cout<<"\nBalance Is Less\nPenality Of "<<n<<" Has Been Imposed\n";
    less(n);
   }
   put();
 }



 class sav_acc:public acc
 {
  float balance,rate;
  public:
  void get(char);
  void put();
  void add(int);
  void less(int);
  void com(int);
 };

 void sav_acc::get(char ch)
 {
  getdata(ch);
  cout<<"\nEnter The Balance: ";
  cin>>balance;
  rate=0.06;
 }

 void sav_acc::put()
 {
  putdata();
  cout<<"Current Balance: "<<balance<<endl;
 }

 void sav_acc::add(int n)
 {
  balance+=n;
  cout<<"\nTransaction Succesful\n";
  put();
 }

 void sav_acc::less(int n)
 {
  if(n>balance)
   cout<<"\nNot Enough Money\n";
  else
   {
    balance-=n;
    cout<<"\nTransaction Succesful\n";
    put();
   }
 }

 void sav_acc::com(int n)
 {
  for(int i=0;i<n;i++)
   balance=balance + balance*(1+rate);

  put();
 }



 void main()
 {
  clrscr();
  char ch;
  int n,m;
  cout<<"\nEnter The Account Type(S/C): ";
  cin>>ch;

  if(ch=='s'||ch=='S')
  {

   sav_acc x;
   x.get(ch);

   while(1)
   {
    clrscr();
    cout<<"\n1. Deposite\n2. Withdrawal\n3. Current Balance\n4. Exit\n:- ";
    cin>>n;

    switch(n)
    {
     case 1: cout<<"\nEnter The Amount: ";
	     cin>>m;
	     x.add(m); break;
     case 2: cout<<"\nEnter The Amount: ";
	     cin>>m;
	      x.less(m); break;
     case 3: cout<<"\nEnter The No. Of Years: ";
	     cin>>m;
	     x.com(m); break;
     case 4:  return;
     default: cout<<"\nYou Enter The Wrong Value\n";
    }
    getch();
   }
  }
  else
  {
   cur_acc x;
   x.get(ch);

   while(1)
   {
    clrscr();
    cout<<"\n1. Deposite\n2. Withdrawal\n3. Current Balance\n4. Exit\n:- ";
    cin>>n;

    switch(n)
    {
     case 1: cout<<"\nEnter The Amount: ";
	     cin>>m;
	     x.add(m); break;
     case 2: cout<<"\nEnter The Amount: ";
	     cin>>m;
	     x.less(m); break;
     case 3: x.check(); break;
     case 4: return;
     default: cout<<"\nYou Enter The Wrong Value\n";
    }
    getch();
   }
  }

 }