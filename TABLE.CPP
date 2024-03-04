#include<stdio.h>
#include<conio.h>
void main()
{ int n,i;

   clrscr();
   printf("\n enter a no:");
   scanf("%d",&n);

   for(i=1;i<10;i++)
   printf("\n%dX%d=%d",n,i,n*i);
   getch();
   }