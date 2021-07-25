//Program Of page no 321

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>

class list
{
 char name[20];
 int code;
 double cost;
 public:
 void getdata();
 void putdata();
};

void list::getdata()
{
 cout<<"\nName: ";
 gets(name);
 cout<<"Code: ";
 cin>>code;
 cout<<"Cost: ";
 cin>>cost;
}

void list::putdata()
{
 cout.setf(ios::left,ios::adjustfield);
 cout.width(20);
 cout<<name;
 cout.width(10);
 cout<<code;
 cout.setf(ios::right,ios::adjustfield);
 cout.width(10);
 cout<<cost<<endl;
}

void main()
{
 clrscr();
 int n;
 cout<<"\nEnter The No. Of Items: ";
 cin>>n;

 list *obj;
 obj=new list[n];

 cout<<"\nEnter The Details Of "<<n<<" Items:\n";
 for(int i=0;i<n;i++)
  obj[i].getdata();

 cout<<"\n\n";

 cout<<setw(20)<<setiosflags(ios::left)<<"NAME";
 cout<<setw(10)<<"CODE";
 cout<<setw(10)<<setiosflags(ios::right)<<"COST";
 cout<<"\n";
 cout<<setw(42)<<setfill('_');
 cout<<"\n";
 cout<<setfill(' ');
 cout.setf(ios::showpoint);
 cout.precision(2);

 for(i=0;i<n;i++)
  obj[i].putdata();


 cout<<setfill('_')<<setw(42);
 cout<<"\n";

  getch();
}
