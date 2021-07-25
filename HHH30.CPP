//Program To Impliment The Operator Overloading On Matrix

#include<iostream.h>
#include<conio.h>

class MAT
{
 int m,n,**mat;
 public:

 MAT()
 {
  m=0;
  n=0;
 }

 MAT(int a,int b)
 {
  m=a;
  n=b;
  init();
 }

 void init();
 void getdata();
 void show();
 MAT operator +(MAT);
 MAT operator -(MAT);
 MAT operator *(MAT);
};

void MAT::init()
{
 delete mat;

 mat=new int*[m];
 for(int i=0;i<m;i++)
  mat[i]=new int[n];
}

void MAT::getdata()
{
 for(int i=0;i<m;i++)
  for(int j=0;j<n;j++)
   cin>>mat[i][j];
}


void MAT::show()
{
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
   cout<<mat[i][j]<<" ";

  cout<<"\n";
 }
}


MAT MAT::operator +(MAT x)
{
  MAT y(m,n);
  for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
    y.mat[i][j] = mat[i][j] + x.mat[i][j];

   return(y);
}

MAT MAT::operator -(MAT x)
{
  MAT y(m,n);
  for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
    y.mat[i][j] = mat[i][j] - x.mat[i][j];

   return(y);
}

MAT MAT::operator *(MAT x)
{
  MAT y(m,x.n);
  for(int i=0;i<m;i++)
   for(int j=0;j<x.n;j++)
   {
    y.mat[i][j]=0;
    for(int k=0;k<n;k++)
     y.mat[i][j]+=mat[i][k]*x.mat[k][j];
   }
   return(y);
}



void main()
{
 int m1,n1,m2,n2,k;
 MAT x1,x2,x3;

 while(1)
 {
  clrscr();

  cout<<"\nChoose The Option:\n";
  cout<<"1. Addition\n2. Substraction\n3. Multiplication\n:- ";
  cin>>k;

  switch(k)
  {
   case 1:
   case 2:
    cout<<"\nEnter The Row And Column Size For 1st Matrix:\n";
    cin>>m1>>n1;
    cout<<"\nEnter The Row And Column Size For 2nd Matrix:\n";
    cin>>m2>>n2;

    if(!((m1==m2)&&(n1==n2)))
    {
     cout<<"\nInvalid Size Of Matrix's\n";
     getch();
     goto X;
    }
    break;

   case 3:
    cout<<"\nEnter The Row And Column Size For 1st Matrix:\n";
    cin>>m1>>n1;
    cout<<"\nEnter The Row And Column Size For 2nd Matrix:\n";
    cin>>m2>>n2;

    if(!(n1==m1))
    {
     cout<<"\nInvalid Size Of Matrix's\n";
     getch();
     goto X;
    }
    break;

   default: cout<<"\nYou Enter The Wrong Value\n";
	    goto X;
  }

  x1=MAT(m1,n1);
  cout<<"\nEnter The "<<m1*n1<<" Values For 1st Matrix:\n";
  x1.getdata();

  x2=MAT(m2,n2);
  cout<<"\nEnter The "<<m2*n2<<" Values For 2st Matrix:\n";
  x2.getdata();

  switch(k)
  {
   case 1: x3=x1+x2; break;
   case 2: x3=x1-x2; break;
   case 3: x3=x1*x2; break;
  }

  cout<<"\nResultant Matrix Is:\n";
  x3.show();

  X:
  cout<<"\n\nFor Restart Press 1\nOtherwise Press 0\n:- ";
  cin>>k;
  if(k!=1)
  break;

 }

 cout<<"\n\nEND OF THE PROGRAM....";
 getch();
}