#include<iostream.h>
#include<conio.h>

class emp
{
  public:

  int no,s;
  char n[30];
  void dis();
  emp();

};

emp :: emp()
{
  clrscr();
  cout<<"enter emp no::";
  cin>>no;

  cout<<"enter emp name::";
  cin>>n;

  cout<<"enter emp salary::";
  cin>>s;
}

void emp :: dis()
{
   clrscr();
  cout<<"******************** EMP information ************************";
  cout<<"\nemp no is::"<<no;
  cout<<"\nemp name is::"<<n;
  cout<<"\nemp salary is::"<<s;
  cout<<"\n*********************** thank you ****************************";

}
void main()
{
  emp e;
  clrscr();
  e.dis();
  getch();
}