#include<iostream.h>
#include<conio.h>

class student
{
  public:

  int rno,m[3],p,t;
  char n[30];

  public:
  void marks();
  void dis();

};

void student :: marks()
  {
   cout<<"enter no::";
   cin>>rno;

   cout<<"enter your name::";
   cin>>n;

   cout<<"enter marks 1::";
   cin>>m[0];

   cout<<"enter marks 2::";
   cin>>m[1];

   cout<<"enter marks 3::";
   cin>>m[2];

   t=m[0]+m[1]+m[2];

   p=t/3;
  }

void student :: dis()
{
   clrscr();
   cout<<"\n*********************** student marksheet  **********************";
   cout<<"\nroll number is::"<<rno;
   cout<<"\nstudent name is::"<<n;
   cout<<"\nsubject 1 marks is::"<<m[0];
   cout<<"\nsubject 2 marks is::"<<m[1];
   cout<<"\nsubject 3 marks is::"<<m[2];
   cout<<"\ntotal is::"<<t;
   cout<<"\npercentage is::"<<p;
   cout<<"\n***********************  thank you ******************************";
}


void main()
{
  student s1;
  clrscr();

  s1.marks();
  s1.dis();
  getch();
}