#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class no
{
  public:

  void odd();
  no();
  void even();

};

no :: no()
{

}

void no :: even()
{
  int a;
  cout<<"\nenter no::";
  cin>>a;

  if(a%2==0)
  {
   cout<<"\nno is even";
  }

}

void no :: odd()
{

  int a;
  cout<<"\nenter no::";
  cin>>a;

  if(a%2!=0)
  {
   cout<<"\nno is odd";
  }

}

void main()
{
  int n;
  no e;
  clrscr();

  b:
  cout<<"\n************************ menu *********************";
  cout<<"\npress 1 even";
  cout<<"\npress 2 odd";
  cout<<"\npress 3 exit;";
  cout<<"\n***************************************************";

  cout<<"\nenter your coise::";
  cin>>n;

  switch(n)
  {
    case 1:
    e.even();
    goto b;
    break;

    case 2:
    e.odd();
    goto b;
    break;

    case 3:
    exit(0);
    break;

   default:
   cout<<"enter valid no";
  }

  getch();
}
