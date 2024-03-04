#include<stdio.h>
#include<conio.h>

void main()
{ int n;
  clrscr();
  printf("enter the no:");
  scanf("%u",&n);

  if(n>=0 && n<=9)
  printf("This is one digit no");

  if(n>=10 && n<=99)
  printf("This is two digit no");

  if(n>=100 && n<=999)
  printf("This is three digit no");

  if(n>=1000 && n<=9999)
  printf("This is four digit no");

  if(n>=10000)
  printf("This is five or more digits no");

  getch();
  }