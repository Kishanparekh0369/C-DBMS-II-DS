#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class fact
{
  public:

  void f();
  fact();
  void dw();
  void w();

};
fact :: fact()
{

}

void fact :: f()
{
int fact=1,n,i;

  cout<<"enter no::";
  cin>>n;

  for(i=n; i>=1; i--)
  {
    fact=fact*i;
  }
  cout<<"fact is:\n"<<fact;

}

void  fact :: dw()
{
  int fact,n,i;
  fact=1;
  i=1;


  cout<<"enter no::";
  cin>>n;

  do
  {
     fact=fact*i;
     i++;
  }

  while(i<=n);

  cout<<"fact is:\n"<<fact;
}

void fact :: w()
{
  int fact,n,i;
  fact=1;
  i=1;

  cout<<"enter no::";
  cin>>n;

  while(i<=n)
  {

     fact=fact*i;
     i++;

  }
  cout<<"fact is:\n"<<fact;


}

void main()
{
  int n;
  fact f;
  clrscr();
  d:
  cout<<"\n************************ menu *********************";
  cout<<"\npress 1 for loop";
  cout<<"\npress 2  do while loop";
  cout<<"\npress 3 while loop";
  cout<<"\npress 4 exit;";
  cout<<"\n***************************************************";


  cout<<"\nenter your coise::";
  cin>>n;

  switch(n)
  {
    case 1:
    f.f();
    goto d;
    break;

    case 2:
    f.dw();
    goto d;
    break;

    case 3:
    f.w();
    goto d;
    break;

    case 4:
    exit(0);
    break;

   default:
   cout<<"enter valid no";
  }

  getch();
}
