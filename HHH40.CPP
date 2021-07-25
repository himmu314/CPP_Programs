//Use Of Template Function

#include<iostream.h>
#include<conio.h>

template<class t>

void sort(t a[],int n)
{
 int k;

 for(int i=0;i<n;i++)
 {
  k=i;
  for(int j=i+1;j<n;j++)
   if(a[k]>a[j])
    k=j;

  if(k!=i)
  {
   t temp=a[i];
   a[i]=a[k];
   a[k]=temp;
  }

 }

}

template<class p>
void display(p a[],int n)
{
 cout.precision(2);
 for(int i=0;i<n;i++)
 cout<<a[i]<<"  ";
}

void main()
{
 clrscr();
 int a[5]={12,43,22,1,0};
 float b[5]={67.2,23.6,22.12,67.23,0.89};

 cout<<"\nBefore Sorting Arrays:\n";
 cout<<"Array A:\n";
 display(a,5);
 cout<<"\nArray B:\n";
 display(b,5);

 sort(a,5);
 sort(b,5);

 cout<<"\n\nAfter Sorting Arrays\n";
 cout<<"Array A:\n";
 display(a,5);
 cout<<"\nArray B:\n";
 display(b,5);

 getch();
}