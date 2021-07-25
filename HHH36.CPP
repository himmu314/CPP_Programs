#include<fstream.h>
#include<conio.h>
#include<iomanip.h>

class list
{
 char name[15];
 char no[10];

 public:
 void getdata();
 void putdata();
};

void list::getdata()
{
 cout<<"\nName: ";
 cin>>name;
 cout<<"TelePhone No.: ";
 cin>>no;
}

void list::putdata()
{
 cout<<setw(15)<<setiosflags(ios::left)<<name;
 cout<<setw(10)<<setiosflags(ios::right)<<no<<endl;
}

void main()
{
 clrscr();
 int n;
 list obj;

 fstream file;
 file.open("list1.txt",ios::out|ios::in|ios::binary);

 cout<<"\nEnter The No. Of ITEMS: ";
 cin>>n;

 cout<<"\nEnter The "<<n<<" ITEMS Details:\n";
 for(int i=0;i<n;i++)
 {
  obj.getdata();
  file.write((char*)&obj,sizeof(obj))<<flush;
 }

 cout<<"\nContents Of File Is:\n";
 cout<<setw(15)<<setiosflags(ios::left)<<"NAME";
 cout<<setw(10)<<setiosflags(ios::right)<<"TelPh No."<<endl;

 file.seekg(0);

 while(file.read((char*)&obj,sizeof(obj))!=NULL) //EOF=NULL
   obj.putdata();

 getch();
}