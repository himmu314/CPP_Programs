//Program To Check the Multiplication

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 int ans;

 while(1)
 {
  int a=rand()%10,b=rand()%10;
  X:
  clrscr();
  cout<<"\nHow Much Is "<<a<<" Times "<<b<<" ?\n";
  cin>>ans;

  if(ans==a*b)
  cout<<"\nVery Good!\n";
  else
  {
  cout<<"Ohh No..!\nPlease Try Again";
  getch();
  goto X;
  }

  int n;
  cout<<"Press 1 to Play Again\nPress 0 To TERMINATE\n:- ";
  cin>>n;

  if(n!=1)
  break;
 }

}
