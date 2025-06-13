#include<stdio.h>
#include<conio.h>

void main()
{

  int n[100],i,k,u,a=0;
  clrscr();

  printf("enter element::");
  scanf("%d",&k);

  for(i=0;i<k;i++)
  {
    printf("enter element[%d]:",i);
    scanf("%d",&n[i]);
  }

printf("element::\n");
  for(i=0;i<k;i++)
  {
  printf("\narray [%d]::%d",i,n[i]);
  }
printf("\nuser enter element::");
  scanf("%d",&u);

for(i=0;i<k;i++)
{
if(n[i]==u)
{
a++;
}
}

printf("Number is::%d",a);

  getch();

}