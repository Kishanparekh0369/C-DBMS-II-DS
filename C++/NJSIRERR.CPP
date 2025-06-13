#include<iostream.h>
#include<conio.h>

class emp
{
 public:

 int id;
 char name;
 float sal;

 emp(int i,char n,float s)
 {
  id=i;
  name=n;
  sal=s;
 }

void display()
{
 cout<<id<<""<<name<<""<<sal<<endl;
}

};

void main()
{
  clrscr();
  emp e1=emp(101,'a',123);
  emp e2=emp(102,'b',345);

  e1.display();
  e2.display();
getch();

}