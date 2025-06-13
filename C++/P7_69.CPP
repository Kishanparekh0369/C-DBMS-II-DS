#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
class kp
{
  public:
  void rev();
  void upper();
  void lower();
  void len();
};

void kp :: rev()
{
  cout<<"\n******************** rev here *****************************";
  char str[40];
  cout<<"\nenter string::";
  gets(str);
  cout<<"string rev is::"<<strrev(str);
  cout<<"\n********************* thank you ****************************************";
}
void kp :: upper()
{
  char str[100];
  cout<<"enter string::";
  gets(str);
  cout<<"in upper case::"<<strupr(str);
}
void kp :: lower()
{
   char str[100];
  cout<<"enter string::";
  gets(str);
  cout<<"in lower case::"<<strlwr(str);
}
void kp :: len()
{
  char str[50];

  cout<<"\nenter string::";
  gets(str);
  cout<<"lenth is::"<<strlen(str);
}

void main()
{

  int k;
  kp b;
  clrscr();
  f:
  cout<<"\n********************** menu **********************";
  cout<<"\npress 1  find reverce()";
  cout<<"\npress 2 find upper()";
  cout<<"\npress 3 find lower()";
  cout<<"\npress 4 find len()";
  cout<<"\npress 5 exit";
  cout<<"\n**************************************************";

  cout<<"\nselect no::";
  cin>>k;

  switch(k)
  {
    case 1:
    b.rev();
    goto f;
    break;

    case 2:
    b.upper();
    goto f;
    break;

    case 3:
    b.lower();
    goto f;
    break;

    case 4:
    b.len();
    goto f;
    break;

    case 5:
    exit(0);
    break;

    default:
    cout<<"\n enter valid no:";

  }
getch();
}