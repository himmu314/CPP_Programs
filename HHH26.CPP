//Program Of Dynamic Intialization Of Object Using Constructor

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class String
{
 char *str;
 public:
 String()
 {

 }

 String(char *);
 void connect(String &,String &);

 void display()
 {
  cout<<str<<endl;
 }
};

String::String(char *p)
{
 int l=strlen(p);
 str=new char[l+1];
 strcpy(str,p);
}

void String::connect(String &p1,String &p2)
{
 str=new char[strlen(p1.str)+strlen(p2.str)+1];

 strcpy(str,p1.str);
 strcat(str,p2.str);
}


void main()
{
 clrscr();
 char ar[30];

 String s1;
 String s2("I Am A Bad Boy");

 cout<<"What Is Your Name: ";
 gets(ar);
 String s3(ar);

 cout<<"\n\nS1: ";
 s1.display();

 cout<<"S2: ";
 s2.display();

 cout<<"S3: ";
 s3.display();

 String s4;
 s4.connect(s2,s3);
 cout<<"\nAdding S2 And S3 In S4:\n";
 cout<<"S4: ";
 s4.display();

 getch();
}