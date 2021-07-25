//Converting Upper Case Into Lower

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void conv(char a[]);

void main()
{
 char str[100];
 clrscr();

 cout<<"\nEnter The Sentense:\n";
 gets(str);

 conv(str);
 cout<<"\nSentense In Upper Case Is:\n"<<str;

 getch();
}

void conv(char a[])
{
 int l;
 l=strlen(a);

 for(int i=0;i<l;i++)
 {
  if(a[i]>=97&&a[i]<=122)
   a[i]=a[i]-32;
 }
}