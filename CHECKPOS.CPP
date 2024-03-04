#include<stdio.h>
#include<conio.h>

void main()

{ int n;
 clrscr();
 printf("\n Enter a no.:");
 scanf("%d",&n);

 if(n<0)
 printf("Negative no.");
 if(n==0)
 printf("Zero");
 if(n>0)
 printf("Positine NO.");

 getch();
 }