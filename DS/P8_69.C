#include<stdio.h>
#include<conio.h>

void main()
{

  int n,i,j,t,a[100];
  clrscr();

   printf("user enter element::");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("enter element[%d]:",i);
    scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
	if(a[i]>a[j])
	 {
	  t=a[i];
	  a[i]=a[j];
	  a[j]=t;
	 }
      }
    }
 for(i=0;i<n;i++)
{
  printf("\nans is::%d",a[i]);
}
getch();
}