#include<stdio.h>
#include<conio.h>
void main();
{unsigned long n,r,s=0;
 clrscr();

printf("Enter a digit no:");
scanf("%lu",&n);

while(n!0)
{r=n%10;
 n=n/10;
 s=s+r;
}
printf("\n Sum of digit no =%lu",s);

getch();
}
