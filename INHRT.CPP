#include<iostream.h>
#include<conio.h>
class first
{
 private:
  int a;
 protected:
  int b;
 public:
  int c;
  first()
  {
   a=10;
   b=20;
   c=30;
  }
  void first_disp()
  {
   cout<<a<<"\t"<<b<<"\t"<<c<<endl;
  }
};
class second : public first
{
 private:
  int x;
 protected:
  int y;
 public:
  int z;
  second()
  {
   x=100;
   y=200;
   z=300;
  }
  void second_disp()
  {
   cout<<b<<"\t"<<c<<endl;
   cout<<x<<"\t"<<y<<"\t"<<z<<endl;
  }
};
void main()
{
 clrscr();
 second obj;

 obj.second_disp();
 cout<<obj.c;
 getch();
}