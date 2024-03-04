/*   INHERITANCE AND CONSTRUCTORS*/
#include<iostream.h>
#include<conio.h>
class first
{
 public:
  first()
  {
   cout<<"First class constructor"<<endl;
  }
  ~first()
  {
   cout<<"First class destructor"<<endl;
  }
};
class second : public first
{
 public:
  second()
  {
   cout<<"Second class constructor"<<endl;
  }
  ~second()
  {
   cout<<"Second class destructor"<<endl;
  }
};
class third : public second
{
 public:
  third()
  {
   cout<<"Third class constructor"<<endl;
  }
  ~third()
  {
   cout<<"Third class destructor"<<endl;
  }
};
void display()
{
 third obj;
}
void main()
{
 clrscr();
 display();
 getch();
}