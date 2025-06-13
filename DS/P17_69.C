#include<stdio.h>
#include<conio.h>

void main()
{

  char name[100];
  int i,n;
  clrscr();

  printf("user enter element::");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("enter name[%d]:",i);
    scanf("%s",&name);
  }

printf("names::::\n");

  for(i=0;i<n;i++)
  {
  printf("\nname is[%d]:%s",i,name);
  }


  getch();

}