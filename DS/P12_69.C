#include<stdio.h>
#include<conio.h>

void main()
{
 int b[100][100];
 int i,j,n,m;
 clrscr();

 printf("enter n::");
 scanf("%d",&n);

 printf("enter m::");
 scanf("%d",&m);

 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
 {
   printf("enter element b[%d][%d]::",i,j);
   scanf("%d",&b[i][j]);
  }
 }
printf("\nTwo array is::");

for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("\nelement is::%d",b[i][j]);
  }
 }
getch();
}
