#include<stdio.h>
#include<conio.h>

void main()
{

  int i,arr[100],k,n;
  clrscr();

  printf("user enter element::");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    printf("\nenter element[%d]:",i);
    scanf("%d",&arr[i]);
}

for(i=1;i<=n;i++)
 {
   if(arr[i]<k)
    {
     k=arr[i];
    }
    }
printf("min=%d",k);


getch();

}
