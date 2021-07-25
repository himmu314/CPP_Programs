//Program Of Implimenting The Class

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{
 char name[30],grade;
 int roll,marks[5];
 float result;

 public:

 void getdata();
 void display();
 void calculate();
};

void student::getdata()
{
 cout<<"Enter The Name: ";
 gets(name);
 cout<<"Enter The Roll NO.: ";
 cin>>roll;
 cout<<"Enter The 5 Subject Marks Out Of 100:\n";
 for(int i=0;i<5;i++)
 {
  cout<<"Subject "<<i+1<<" : ";
  cin>>marks[i];
 }
}

void student::calculate()
{
  int sum=0;
  for(int i=0;i<5;i++)
   sum+=marks[i];

  result=sum/5.0;

  if(result>=90)
   grade='A';
  else
  if(result<90 && result>=80)
  grade='B';
  else
  if(result<80 && result>=70)
  grade='C';
  else
  if(result<70 && result>=60)
  grade='D';
  else
  grade='E';
}

void student::display()
{
 cout<<"\nName: "<<name<<"\nRoll No.: "<<roll;
 cout<<"\n\nSubjects Marks:\n";
 for(int i=0;i<5;i++)
 {
  cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
 }
 cout<<"\nTotal Percentage: "<<result<<"%\n";
 cout<<"Grade: "<<grade<<endl;
}


void main()
{
 clrscr();
 student s1,s2;
 cout<<"\nEnter The Data Of 1st Student:\n\n";
 s1.getdata();
 cout<<"\nEnter The Data Of 2nd Student:\n\n";
 s2.getdata();

 s1.calculate();
 s2.calculate();

 getch();
 clrscr();

 cout<<"\n\nData Of 1st Sudent:\n";
 s1.display();

 getch();
 clrscr();

 cout<<"\n\nData Of 2nd Sudent:\n";
 s2.display();

 getch();
}