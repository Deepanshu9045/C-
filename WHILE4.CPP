#include<stdio.h>
#include<conio.h>
void main()

{ int n,i=1;
  clrscr();

  printf("\n Enter a no:");
  scanf("%d",&n);

  while(i<=10)
  {printf("\n%dx%d=%d",n,i,n*i);
   i++;
  }
  getch();
}