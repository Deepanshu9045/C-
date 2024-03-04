/*Function with default arguments */

#include<iostream.h>
#include<conio.h>
int sum(int a,int b,int c=0,int d=0,int e=0)
{
 return(a+b+c+d+e);
}
void main()
{
 clrscr();
 cout<<"sum(10,20) = "<<sum(10,20)<<endl;
 cout<<"sum(10,20,30) = "<<sum(10,20,30)<<endl;
 cout<<"sum(10,20,30,40) = "<<sum(10,20,30,40)<<endl;
 cout<<"sum(10,20,30,40,50) = "<<sum(10,20,30,40,50)<<endl;
 getch();
}
