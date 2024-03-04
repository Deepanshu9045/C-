/*   HYBRID INHERITANCE*/
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
class fourth : public second,public third
{
 public:
  int d;
};
void main()
{
 clrscr();
 fourth obj;
 obj.second::a=10;
 obj.b=20;
 obj.c=30;
 obj.d=40;
 cout<<obj.second::a<<"\t"<<obj.b<<"\t"<<obj.c<<"\t"<<obj.d<<endl;
 getch();
}