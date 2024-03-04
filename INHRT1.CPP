/*   SINGLE INHERITANCE*/
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
void main()
{
 clrscr();
 second obj;
 obj.a=10;
 obj.b=20;
 cout<<obj.a<<"\t"<<obj.b<<endl;
 getch();
}