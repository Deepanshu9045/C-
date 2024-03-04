#include<stdio.h>
#include<conio.h>
void main()
{ int n,i;
  clrscr();
  printf("\n Enter a no:");
  scanf("%d",&n);
  for(i=1;i<=n/2;i++)
  {if(n%i==0)
   printf("\n%d",i);
  }
  getch();
}
