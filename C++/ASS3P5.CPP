#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

int t,p,m[7],i,g,rno,male,female;
char n[10],p1[50];
float pr;

class s
{
  public:

  void get();
  void dis();
};

void s :: get()
{
t=0;
  cout<<"*************** student information ***********************************";
  cout<<"\nenter your name::";
  cin>>n;

  cout<<"\nenter your roll no::";
  cin>>rno;

  cout<<"\nenter your gender(1 for male || 2 for female::";
  cin>>g;

  if(g==1)
  {
   cout<<"\nmale";
  }
  else if(g==2)
  {
   cout<<"\nfemale";
  }

cout<<"\nenter 6 subject marks::";

for(i=0;i<6;i++)
{
 cout<<"\nenter subject marks::";
 cin>>m[i];
}

for(i=0;i<6;i++)
{

t=t+m[i];

}
cout<<"\ntotal is::"<<t;

for(i=0;i<6;i++)
{
pr=t/6;
}

cout<<"\n********************************** end **************************";

}

void s :: dis()
{

  cout<<"************** student markseet *********************";
  cout<<"\n";
  cout<<"\nnumber"<<setw(7)<<"name"<<setw(7)<<"sub1"<<setw(5)<<"sub2"<<setw(5)<<"sub3"<<setw(5)<<"sub4"<<setw(5)<<"sub5"<<setw(5)<<"sub6"<<setw(7)<<"total"<<setw(5)<<"pr"<<setw(7)<<"result";
  cout<<"\n------"<<setw(7)<<"----"<<setw(7)<<"----"<<setw(5)<<"----"<<setw(5)<<"----"<<setw(5)<<"----"<<setw(5)<<"----"<<setw(5)<<"----"<<setw(7)<<"-----"<<setw(5)<<"--"<<setw(7)<<"------";
  cout<<"\n";
  cout<<rno<<setw(13)<<n<<setw(3)<<m[0]<<setw(5)<<m[1]<<setw(5)<<m[2]<<setw(5)<<m[3]<<setw(5)<<m[4]<<setw(5)<<m[5]<<setw(7)<<t<<setw(7)<<pr<<setw(7);

if(pr<35)
{
 cout<<"  fail";
}
else if(pr>48)
{
 cout<<"pass";
}

cout<<"\n";
cout<<"\n";
cout<<"sr.no"<<setw(10)<<"result"<<setw(10)<<"male"<<setw(10)<<"female"<<setw(10)<<"total";
cout<<"\n";

  cout<<rno<<setw(10);
}
void main()
{
   s a;
   clrscr();

   a.get();
   clrscr();
   a.dis();
   getch();
}