/*   HIERARCHICAL INHERITANCE*/
#include<iostream.h>
#include<conio.h>
class first
{
 public:
  int a;
};
class second : public first
{
 public:
  int b;
};
class third : public first
{
 public:
  int c;
};
void main()
{
 clrscr();
 second obj1;
 third obj2;
 obj1.a=10;
 obj1.b=20;
 obj2.a=100;
 obj2.c=200;
 cout<<obj1.a<<"\t"<<obj1.b<<endl;
 cout<<obj2.a<<"\t"<<obj2.c<<endl;
 getch();
}