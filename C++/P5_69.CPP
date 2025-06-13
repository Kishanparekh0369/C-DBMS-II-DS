#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class as
{
  public:

  int a[5],i,j,t,k;

  public:
  void sort_asc();
  void sort_desc();

};


void as :: sort_asc()
{
  cout<<"\nenter element::";
  for(i=0;i<5;i++)
  {
    cin>>a[i];
  }
   for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
      {
	if(a[i]>a[j])
	 {
	  t=a[i];
	  a[i]=a[j];
	  a[j]=t;
	 }
      }
    }
 for(i=0;i<5;i++)
{
  cout<<"\nasc is::";
  cout<<a[i];
}
}

void as :: sort_desc()
{
cout<<"enter element::";
  for(i=0;i<5;i++)
  {
    cin>>a[i];
  }
   for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
      {
	if(a[i]<a[j])
	 {
	  t=a[i];
	  a[i]=a[j];
	  a[j]=t;
	 }
      }
    }
 for(i=0;i<5;i++)
{
  cout<<"\ndesc is::";
  cout<<a[i];
}
}

void main()
{
  int k;
  clrscr();

  as b;
  a:
  cout<<"*************** menu *****************";

  cout<<"\nenter 1 asc";
  cout<<"\nenter 2 desc";
  cout<<"\nenter 3 exit";

  cout<<"\n***************************************";

  cout<<"\nenter no::";
  cin>>k;

  switch(k)
  {
   case 1:

   b.sort_asc();
   goto a;
   break;


   case 2:

   b.sort_desc();
   goto a;
   break;

   case 3:
   exit(0);
   break;

   default:
   cout<<"\ngo back";
}
getch();
}
