/*   MULTIPLE INHERITANCE*/
#include<iostream.h>
#include<conio.h>
class first
{
 public:
  int a;
};
class second
{
 public:
  int b;
};
class third : public first, public second
{
 public:
  int c;
};
void main()
{
 clrscr();
 third obj;
 obj.a=10;
 obj.b=20;
 obj.c=30;
 cout<<obj.a<<"\t"<<obj.b<<"\t"<<obj.c<<endl;
 getch();
}