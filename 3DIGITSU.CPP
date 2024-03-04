#include<stdio.h>
#include<conio.h>

void main()

{ int n,a,b,c,s;

printf("enter 3 digit no. :");
scanf("%d",&n);

a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;

s=a+b+c;

printf("sum of 3 digit=%d",s);

getch();
}