#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class bank
{
  public:

  long int ano,b,w,d;
  char n[100],at[100];

  void get();
  void dip();
  void with();
  void avl();

};

void bank :: get()
{
   cout<<"***************** account information **************************";
   cout<<"\nenter account no::";
   cin>>ano;

   cout<<"enter name::";
   cin>>n;

   cout<<"enter account type::";
   cin>>at;

   cout<<"enter account balance::";
   cin>>b;

}

void bank :: with()
{

   cout<<"enter withdraw amount::";
   cin>>w;


   if(b>=w)
   {
   b=b-w;
     cout<<"\nname is::"<<n;
     cout<<"\ntotal amuont is::"<<b;
   }
   else
   {
    cout<<"balence is not avl||||";

   }
}

void bank :: dip()
{

   cout<<"entere disposit amount::";
   cin>>d;

   b=d+b;

   cout<<"\nname is::"<<n;
   cout<<"\ntotal balance is::"<<b;

}


void bank :: avl()
{
  cout<<"avl balence is::"<<b;
}
void main()
 {
   int ch;
   bank a;
  clrscr();

  a.get();
  d:
  cout<<"\n************************* menu *********************";
  cout<<"\n press 1 withdraw";
  cout<<"\n press 2 diposit";
  cout<<"\npress 3 check avl balence";
  cout<<"\n press 4 exit";
  cout<<"\n****************************************************";

  cout<<"\nenter your coise::";
  cin>>ch;

  switch(ch)
  {
   case 1:
   a.with();
   goto d;
   break;

   case 2:
   a.dip();
   goto d;
   break;

   case 3:
   a.avl();
   goto d;
   break;

   case 4:
   exit(0);
   break;

   default:
   cout<<"enter valid coise";

  }


   getch();
    }