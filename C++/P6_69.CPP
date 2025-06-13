#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>

class kp
{
  public:
  void len();
  void cat();
  void camp();
  void cpy();

};

void kp :: len()
{
  char str[50];

  cout<<"\nenter any name::";
  gets(str);
  cout<<"string lenth is::"<<strlen(str);

}
void kp :: cpy()
{
  char s1[30],s2[30];
  cout<<"enter string 1::";

  gets(s1);
  cout<<"second string is::"<<strcpy(s2,s1);
}
void kp :: camp()
{
  int c;
  char s1[30],s2[30];
  cout<<"enter s1::";
  cin>>s1;
  cout<<"enter s2::";
  cin>>s2;


  if(s1>s2)
  {
   cout<<"s1";
  }
  else if(s1<s2)
  {
   cout<<"s2";
  }
  else
  {
   cout<<"same";
  }

}
void kp :: cat()
{
 char s1[30],s2[30];
  cout<<"enter s1::";
  cin>>s1;
  cout<<"enter s2::";
  cin>>s2;
  strcat(s1,s2);
  cout<<"ans is::"<<s1,s2;
}

void main()
{

  int k;
  kp b;
  clrscr();
  d:
  cout<<"\n********************** menu **********************";
  cout<<"\npress 1  find len";
  cout<<"\npress 2 find cpy";
  cout<<"\npress 3 find cmp";
  cout<<"\npress 4 find cat";
  cout<<"\npress 5 exit";
  cout<<"\n**************************************************";

  cout<<"\nselect no::";
  cin>>k;

  switch(k)
  {
    case 1:
    b.len();
    goto d;
    break;

    case 2:
    b.cpy();
    goto d;
    break;

    case 3:
    b.camp();
    goto d;
    break;

    case 4:
    b.cat();
    goto d;
    break;

    case 5:
    exit(0);
    break;

    default:
    cout<<"\n enter valid no:";

  }
getch();
}