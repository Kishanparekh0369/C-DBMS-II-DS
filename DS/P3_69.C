#include<stdio.h>
#include<conio.h>


void main()
{

  int arr[100],i,n,k=0;
  clrscr();

  printf("user enter element::");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {

    printf("enter element[%d]:",i);
    scanf("%d",&arr[i]);
  }


  for(i=0;i<n;i++)
  {
     k=arr[i]+k;
  }

printf("\nans is::%d",k);

  getch();

}