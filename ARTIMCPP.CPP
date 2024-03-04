#include<iostream.h>
#include<conio.h>
void main()
{ int a,b,c;
  clrscr();

  cout<<"Enter Two numbers ::: "<<"\n";
  cin>>a>>b;

  c=a+b;
  cout<<"\n"<<a<<"+"<<b<<"="<<c;

  c=a-b;
  cout<<"\n"<<a<<"-"<<b<<"="<<c;

  c=a*b;
  cout<<"\n"<<a<<"*"<<b<<"="<<c;

  c=a/b;
  cout<<"\n"<<a<<"/"<<b<<"="<<c;

  c=a%b;
  cout<<"\n"<<a<<"%"<<b<<"="<<c;

  getch();
}