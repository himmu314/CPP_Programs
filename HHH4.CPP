//Program To find the sum of two dice

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 int ar[10],a,b;
 clrscr();

 cout<<"\nPossible 10 No. From Sum Of 2 Dice Are:\n";
 for(int i=0;i<10;)
 {
  a=rand()%7;
  b=rand()%7;
  if(a+b>1)
  {
   ar[i]=a+b;
   cout<<ar[i]<<endl;
   i++;
  }
 }

 getch();
}