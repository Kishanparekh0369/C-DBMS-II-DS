#include<iostream.h>
#include<conio.h>
class demo
{
  int a,b;
  void getdata(int x, int y)
  {
    a=x;
    b=y;

  }
  void display()
  {
   cout<<a;
   cout<<b;
  }
  demo();
};


void main()
 {
   int i,n1,n2;
   demo d[5];

   clrscr();

   for(i=0;i<5;i++)
   {
    cout<<"enter no 1::";
    cin>>n1;

    cout<<"enter no 2::";
    cin>>n2;

    d[i].getdata(n1,n2);

   }
for(i=0;i<5;i++)
{
  d[i].display();
}


   getch();
 }