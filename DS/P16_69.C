#include<stdio.h>
#include<conio.h>

void main()
{

  char a[5];
  int i;
  clrscr();

  for(i=0;i<5;i++)
  {
    printf("enter name[%d]::",i);
    scanf("%s",&a);
  }

  printf("names are::");

  for(i=0;i<5;i++)
  {
  printf("\nname is[%d]::%s",i,a);
  }


  getch();

}