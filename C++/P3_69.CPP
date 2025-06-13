#include<iostream.h>
#include<conio.h>


class info
{
  public:

  int a;
  char c[40],n[20];

  public:

 void getdata();
 void printdata();

}s1;
void info  :: getdata()
{
 cout<<"enter your name::";
 cin>>s1.n;
 cout<<"enter city name::";
 cin>>s1.c;
 cout<<"enter your age::";
 cin>>s1.a;
}

void info  :: printdata()
{
 clrscr();
 cout<<"\n**************************************************************";
 cout<<"\nyour name is::"<<s1.n;
 cout<<"\nyour city name is::"<<s1.c;
 cout<<"\nyour age is::"<<s1.a;

 cout<<"\n*************************************************************";

}

void main()
{
  clrscr();
  s1.getdata();
  s1.printdata();
  getch();
}