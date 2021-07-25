//Program, Of Combination Of Three Different No.

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3],l;
 clrscr();

 cout<<"\nEnter The Three No.:\n";
 cin>>a[0]>>a[1]>>a[2];

 cout<<"\nThe Combinations Formed By Three No. Are:\n";
 for(int i=0;i<3;i++)
  for(int j=i+1,k=0;k<2;j++,k++)
  {
    if((j+1)%3!=i)
    l=(j+1)%3;
    else
    l=(j+2)%3;
    cout<<a[i]<<a[j%3]<<a[l]<<endl;
  }

  getch();
}