#include<stdio.h>
#include<conio.h>
void main()
{ int age;


printf("\n enter the age:");
scanf("%d",&age);

if(age>=1 && age<=25)
printf("Brahmacharya");

if(age>=26 && age<=50)
printf("Griasta");

if(age>=51 && age<=75)
printf("Vanprastha");

if(age>=76 && age<=100)
printf("Sannyasa");

if(age>100)
printf("You should die now");

getch();
}