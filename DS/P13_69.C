#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,c,n[50][50],i,j;
   clrscr();

   printf("enter value 1::");
   scanf("%d",&a);

   printf("enter value 2::");
   scanf("%d",&b);

   c=a*b;

   printf("\nelemrnt is::%d",c);

   for(i=0;i<a;i++)
   {
    for(j=0;j<b;j++)
    {
   //  printf("\nenter value n[%d][%d]::",i,j);
     scanf("%d",&n[i][j]);
     }
}
     for(i=0;i<a;i++)
   {
    for(j=0;j<b;j++)
    {
     printf("value is[%d][%d]=%d",i,j,n[i][j]);

    }

    // printf("\n");
}

   printf("\n");
   getch();
 }