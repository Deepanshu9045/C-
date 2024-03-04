#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 cout<<"Enter two numbers:"<<endl;
 cin>>a>>b;

 if(a>b)
 cout<<"The Greater number is:"<<a<<endl;

 if(b>a)
 cout<<"The Greater number is:"<<b<<endl;

 if(a==b)
 cout<<a<<" and "<<b<<" are equal";

 getch();
}