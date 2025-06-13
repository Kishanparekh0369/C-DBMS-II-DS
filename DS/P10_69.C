#include<stdio.h>
#include<conio.h>

void main()
{
 int b[3][3];
 int i,j;
 clrscr();

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("enter element b[%d][%d]::",i,j);
   scanf("%d",&b[i][j]);
  }
 }
printf("\nTwo array is::");

for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("\nelement is::%d",b[i][j]);
  }
 }

getch();
}