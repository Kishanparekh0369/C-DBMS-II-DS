#include<conio.h>
#include<iostream.h>

class in
{
  public:

  int a,b;

  public:

  in();
}

in :: in()
{
 cout<<"enter value of A:";
 cin>>a;

 cout<<"enter value of B:";
 cin>>b;


 a=a+b;
 b=a-b;
 a=a-b;


 cout<<"a out put is::"<<a;
 cout<<"\nb out put is::"<<b;
}
void main()
{
 clrscr();
 in();
 getch();
}