#include<stdio.h>
#include<conio.h>

void main()
{

  int a[5],i;
  clrscr();

  for(i=0;i<5;i++)
  {
    printf("enter element[%d]:",i);
    scanf("%d",&a[i]);
  }

  printf("element are::");

  for(i=0;i<5;i++)
  {
  printf("\narry [%d]",i,a);
  }


  getch();

}