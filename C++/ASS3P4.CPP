#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>

long int bs,pt,da,hra,inx,gs,ns,en,td;

char n1[25];

int i,n;

class kp
{

public:
void get();
void dis();
};

void kp :: get()
{
  cout<<"enter employ number::";
  cin>>en;

  cout<<"enter employ name::";
  cin>>n1;

  cout<<"enter basic salary::";
  cin>>bs;

  if(bs<=1500)
  {
   da=bs*159/100;
  }
  else if(bs<=2500)
  {
   da=bs*148/100;
  }
   else if(bs<=4500)
  {
   da=bs*125/100;
  }
   else
  {
   da=bs*90/100;
  }


  cout<<"enter hra code::";
  cin>>hra;

  if(hra=0)
  {
   hra=0;
  }
  else if(hra=1)
  {
   hra=120;
  }
  else if(hra=2)
  {
   hra=250;
  }
  else
  {
   hra=400;
  }

gs=da+hra+bs;

inx=gs*10/100;
pt=80;
td=inx+pt;
ns=gs-td;

}

void kp :: dis()
{

  cout<<"******************    employ payslip   *************************\n"<<setw(40)<<"_______________________";
  cout<<"\n";
  cout<<"employ no:"<<en<<setw(45)<<"name:"<<n1;

  cout<<"\n--------------------------------------------------------------------";
  cout<<"\n";
  cout<<"\n";

 cout<<"Eraning"<<setw(10)<< "Amount" <<setw(30) <<"Deductions"<<setw(20)<<"Amount";
 cout<<"\n";

 cout<<"BASIC"<<setw(10)<<bs<<endl;


 cout<<"\n";
 cout<<"\n";

 cout<<"DA"<<setw(12)<<da<<setw(30)<<"PT"<<setw(23)<<pt<<endl;


 cout<<"\n";
 cout<<"\n";

 cout<<"HRA"<<setw(12)<<hra<<setw(30)<<"Incometext"<<setw(23)<<inx<<endl;//<<i;


 cout<<"\n";
 cout<<"\n";

 cout<<"Gross"<<setw(10)<<gs<<setw(30)<<"Total deduction"<<setw(23)<<td<<endl;

 cout<<"\n";


 cout<<"-----------------------------------------------------------------------";
 cout<<"\n"<<setw(49)<<"Net salary"<<setw(20)<<ns<<endl;

}

void main()
{
  kp k[20];
  clrscr();

  cout<<"enter no of::";
  cin>>n;

  for(i=0;i<n;i++)
  {
   k[i].get();
  }

  for(i=0;i<n;i++)
  {
    k[i].dis();
  }
  getch();
}