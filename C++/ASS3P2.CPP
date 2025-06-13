#include<iostream.h>
#include<conio.h>

class c
{
  public:

  int   a[10],tm[10],tr[10],tw[10];
  char n[50],co[50],tc[50];

  void gd();
  void dis();
};

void c :: gd()
{
  cout<<"\n********************** cricketers information ******************";
  cout<<"\nenter your name::";
  cin>>n[i];
  cout<<"enter your age::";
  cin>>a[i];
  cout<<"which contry play::";
  cin>>co[i];
  cout<<"type of crticketer::";
  cin>>tc[i];
  cout<<"total match::";
  cin>>tm[i];
  cout<<"total rans::";
  cin>>tr[i];
  cout<<"total wickets::";
  cin>>tw[i];

cout<<"\n********************** end ****************************";

}

void c :: dis()
{
// clrscr();
 cout<<"\n********************* crticketers information *******************";
 cout<<"\nyour name is::"<<n;
 cout<<"\nyour age is::"<<a;
 cout<<"\nyour contry is::"<<co;
 cout<<"\ntype of crticketer is::"<<tc;
 cout<<"\ntotal match is::"<<tm;
 cout<<"\ntotal rans is::"<<tr;
 cout<<"\ntotal wickets is::"<<tw;
 cout<<"\n********************* end ****************************************";
}


void main()
 {
   c c1[50];
   int no,i;
   clrscr();

   cout<<"enter  crticketers no::";
   cin>>no;

   for(i=0;i<no;i++)
   {
   c1[i].gd();
   }
   for(i=0;i<no;i++)
   {
    c1[i].dis();
   }

   getch();
}