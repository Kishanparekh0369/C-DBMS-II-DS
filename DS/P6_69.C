#include<stdio.h>
#include<conio.h>

void main()
{

  int n[100],i,k,u,t;
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
  printf("\narray [%d]::%d",i,n[i]);
  }
printf("\nuser enter element::");
  scanf("%d",&u);

for(i=0;i<k;i++)
{
if(u==n[i])
{
  t=n[i];
  printf("%d match with %d in arr[%d]",u,n[i],i);
  break;
}
}
if(u%=n[i])
{
printf("%d is not mathch",u);
}
getch();

}