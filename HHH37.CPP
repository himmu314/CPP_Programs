#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<ctype.h>

class list
{
 char name[15], tno[12];
 public:
 void getdata();
 void putdata();

 int cmp1(char  *n)
 {
  return(strcmp(n,name));
 }

 int cmp2(char  *t)
 {
  return(strcmp(t,tno));
 }

}obj;

void list::getdata()
{
 cout<<"\nEnter Name: ";
 cin>>name;

 for(int i=0;name[i]!='\0';i++)
  name[i]=toupper(name[i]);

 cout<<"Telephone No.: ";
 cin>>tno;
}

void list::putdata()
{
 cout<<setw(15)<<setiosflags(ios::left)<<name;
 cout<<setw(12)<<setiosflags(ios::right)<<tno;
 cout<<endl;
}

void display();
void telephone();
void Name();
void modify();


void main()
{
 clrscr();
 int n;
 ofstream fout;
 fout.open("Tfile.txt",ios::out);
 fout.seekp(0);

 cout<<"\nEnter The No. Of Items: ";
 cin>>n;

 for(int i=0;i<n;i++)
 {
  obj.getdata();
  fout.write((char*)&obj,sizeof(obj));
 }
 fout.close();

 cout<<"\nContents Of File Is:\n";
 display();
 getch();

 while(1)
 {
  clrscr();
  cout<<"\nChoose The Option:\n1. Enter Name For Telephone No.\n";
  cout<<"2. Enter Telephone No. For Name\n3. Modify The Telephone No.\n4. Display\n5. Exit\n:- ";
  cin>>n;

  switch(n)
  {
   case 1: telephone(); break;
   case 2: Name(); break;
   case 3: modify(); break;
   case 4: display(); break;
   case 5: fout.close(); return;
   default: cout<<"\nWrong Entry\n";
  }
  getch();
 }
}


void display()
{
 ifstream fin;
 fin.open("Tfile.txt",ios::in);
 fin.seekg(0);

 cout<<setw(15)<<setiosflags(ios::left)<<"NAME";
 cout<<setw(12)<<setiosflags(ios::right)<<"T_No";
 cout<<endl;

 while(fin.read((char*)&obj,sizeof(obj)))
  obj.putdata();

  fin.close();
}

void telephone()
{
 char name[15];
 int f=0;
 ifstream fin("Tfile.txt");

 cout<<"\nEnter The Name: ";
 cin>>name;

  for(int i=0;name[i]!='\0';i++)
  name[i]=toupper(name[i]);

  while(fin.read((char*)&obj,sizeof(obj)))
   if(obj.cmp1(name)==0)
    {
     f=1;
     obj.putdata();
     break;
    }

 if(f==0)
 cout<<"\nData Does Not Found\n";

 fin.close();
}


void Name()
{
 char tno[10];
 int f=0;
 ifstream fin("Tfile.txt");

 cout<<"\nEnter The Telephone No.: ";
 cin>>tno;

  while(fin.read((char*)&obj,sizeof(obj)))
   if(obj.cmp2(tno)==0)
    {
     f=1;
     obj.putdata();
     break;
    }

 if(f==0)
 cout<<"\nData Does Not Found\n";

 fin.close();
}


void modify()
{
  char name[15];
  int f=0;
  fstream file;
  file.open("Tfile.txt",ios::in|ios::ate);
  file.seekg(0);

  cout<<"\nEnter The Name: ";
  cin>>name;

  for(int i=0;name[i]!='\0';i++)
  name[i]=toupper(name[i]);

 while(file.read((char*)&obj,sizeof(obj)))
   if(obj.cmp1(name)==0)
    {
     f=1;
     cout<<"\nEnter The New Information";
     obj.getdata();
     file.seekp(file.tellg()-sizeof(obj));
     file.write((char*)&obj,sizeof(obj));

     cout<<"\nUpdated Contents Of File:\n";
     display();
     break;
    }

   if(f==0)
    cout<<"\nData Does Not Found\n";
}