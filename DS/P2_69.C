#include<stdio.h>
#include<conio.h>

void main()
{

  int n[100],i,k;
  clrscr();

  printf("user enter element::");
  scanf("%d",&k);

  for(i=0;i<k;i++)
  {
    printf("enter element[%d]:",i);
    scanf("%d",&n[i]);
  }

printf("element::\n");

  for(i=0;i<k;i++)
  {
  printf("\narray [%d]",i,n[i]);
  }


  getch();

}