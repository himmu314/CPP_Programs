//Program To Impliment Operator Overloading in 4 Basic Operators on Float type variable

#include<iostream.h>
#include<conio.h>

class FLOAT
{
 float n;
 public:

 FLOAT()      //Constructor 1
 { n=0; }

 FLOAT(float x)  //Constructor 2
 {
  n=x;
 }

 void getdata()
 {
  cout<<"Enter The No.\n";
  cin>>n;
 }

 void show()
 {
  cout<<n<<"\n";
 }

 FLOAT operator +(FLOAT x);
 FLOAT operator -(FLOAT x);
 FLOAT operator *(FLOAT x);
 FLOAT operator /(FLOAT x);

/* ~FLOAT()     //Destructor
 {
  cout<<"\nDistroyed Object\n";
 } */
};



FLOAT FLOAT::operator +(FLOAT x)
{
 FLOAT y;
 y.n=n+x.n;
 return(y);
}

FLOAT FLOAT::operator -(FLOAT x)
{
 FLOAT y;
 y.n=n-x.n;
 return(y);
}

FLOAT FLOAT::operator *(FLOAT x)
{
 FLOAT y;
 y.n=n*x.n;
 return(y);
}

FLOAT FLOAT::operator /(FLOAT x)  //Shoter Form
{ return(FLOAT(n+x.n)); }  //Invokes Constructor 2 And Return The Temporary Object With No Name



void main()
{
  int n;
  FLOAT x1,x2,x3;

  while(1)
  {
   clrscr();
   cout<<"\nEnter The Two NO.:\n\n";
   x1.getdata();
   x2.getdata();
   cout<<"\nChosse The Options:\n";
   cout<<"1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n:- ";
   cin>>n;

   switch(n)
   {
    case 1: x3=x1+x2; break;
    case 2: x3=x1-x2; break;
    case 3: x3=x1*x2; break;
    case 4: x3=x1/x2; break;
    default: cout<<"\nInvalid Input\n";
   }
   cout<<"Value Is: ";
   x3.show();

   cout<<"\nFor Restart Press 1\nOtherwise Press 0\n:- ";
   cin>>n;
   if(n!=1)
   break;
  }
  getch();
}
