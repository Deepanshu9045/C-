#include<stdio.h>
#include<conio.h>

void main()
{ int n,i,f=1;
  clrscr();

  printf("\n Enter a no:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)

  f=f*i;

  printf("\n Factorial=%d",f,n);


  getch();
}