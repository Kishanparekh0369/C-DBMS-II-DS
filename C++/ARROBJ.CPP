#include<iostream.h>
#include<conio.h>

class emp
{
  public:

  int eid,a;
  char name[50];

  void gd();
  void dis();
};

void emp  :: gd()
{
  cout<<"\n**************** emp information *********************";
  cout<<"\nenter emp id::";
  cin>>eid;

  cout<<"enter emp name::";
  cin>>name;

  cout<<"enter emp age::";
  cin>>a;

  cout<<"\n******************* end *********************************";
}

void emp :: dis()
{
  cout<<"\n**************** emp information *********************";

  cout<<"\nemp id is::"<<eid;
  cout<<"\nemp name is::"<<name;
  cout<<"\n emp age is::"<<a;
  cout<<"\n**************** end ********************************";
}

void main()
{
  emp e1[20];
  int n,i;

  clrscr();
  cout<<"enter number of emp::";
  cin>>n;

  for(i=0;i<n;i++)

  e1[i].gd();

  for(i=0;i<n;i++)
  {
   e1[i].dis();
  }

getch();
}