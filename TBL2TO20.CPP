#include<stdio.h>
#include<conio.h>
void main()
{ int n,i;
  int j;
  clrscr();
  for(n=2;n<=20;n++)
  {j=n;
   for(i=1;i<=10;i++)
   {
   printf("%3d\t",(j*i));
   }
   printf("\n");
  }
  getch();
}
