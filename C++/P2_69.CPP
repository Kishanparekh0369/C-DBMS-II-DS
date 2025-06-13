#include<conio.h>
#include<iostream.h>

class f
{
 public:
 int n,i,fact;
 public:
 void get();
 void print();
};

void f :: get()
{
 fact=1;

  cout<<"enter no::";
  cin>>n;

  for(i=n; i>=1; i--)
  {
    fact=fact*i;
  }

}

void f :: print()
{

 cout<<"\n fact is::"<<fact ;
}

void main()
{
 f fac;
 clrscr();
 fac.get();
 fac.print();
 getch();

}