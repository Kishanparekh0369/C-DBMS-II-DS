#include<conio.h>
#include<iostream.h>

class fibo
{
  public:

  int n,i;

  public:

  void getdata();
  void printdata();
};

void fibo :: getdata()
{
  cout<<"user enter no::";
  cin>>n;
}

void fibo :: printdata()
{
int n1=1,n2=1,n3;
cout<<"0";
  cout<<"\n1";
  cout<<"\n1";

for(i=0;i<n;i++)
{

  n3=n1+n2;
  n1=n2;
  n2=n3;
  cout<<"\n"<<n3;

}
}

void main()
{
 fibo s1;
 clrscr();
 s1.getdata();
 s1.printdata();
 getch();
}

