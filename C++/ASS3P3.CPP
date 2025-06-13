#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>

 int no[10],q[10],r[10],t[10];
 int a[10],n,i,q1=0,a1=0;
 double c[10],c1=0;

class salsman
{

 public:

 void get();
 void dis();
};

void salsman :: get()
{
 cout<<"\n*********************** salsman information *****************";

 cout<<"\nenter salsman no::";
 cin>>no[i];

 cout<<"enter quantity sold::";
 cin>>q[i];


 cout<<"enter rate::";
 cin>>r[i];

 a[i]=q[i]*r[i];



 if(a[i]<=1000)
 {
  c[i]=0;
 }
 else if(a[i]>1000 && a[i]<2000)
 {
  c[i]=((double)((double)a[i])*15)/100;
 }
  else if(a[i]>2000 && a[i]<4000)
 {
  c[i]=((double)((double)a[i])*20)/100;
 }
 else
 {
  c[i]=((double)((double)a[i])*25)/100;
 }

q1=q[i]+q1;
a1=a[i]+a1;

c1=c[i]+c1;

  cout<<"\n********************** end **********************************";
}



void salsman :: dis()
{
  for(i=1;i<=n;i++)
  {
    cout<<"\n";

    cout<<no[i] <<setw(15) << q[i] << setw(23) << r[i]<< setw(17) << a[i]  << setw(14) << c[i] ;
  }

cout<<"\n--------------------------------------------------------------------------";
cout<<"\n--------------------------------------------------------------------------";

cout<<"\ntotal"<<setw(11)<<q1<<setw(40)<<a1<<setw(14)<<c1;

cout<<"\n---------------------------------------------------------------------------";


}


void main()
{
  salsman s1[10];

  clrscr();

  cout<<"enter no of salsman::";
  cin>>n;


  for(i=1;i<=n;i++)
  {
   s1[i].get();
  }

cout<<"\n-------------------------------------------------------------------------";

cout<<"\nsalsmanno" <<setw(15)<<"quantity sold" <<setw(16)<< "rate" <<setw(17)<<"amount" <<setw(15) <<"commission";

cout<<"\n---------------------------------------------------------------------------";


  for(i=1;i<=n;i++)
  {
    s1[i].dis();
  }


getch();
}
