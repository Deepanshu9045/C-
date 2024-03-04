#include<iostream.h>
#include<conio.h>

class rectangle
{ int l,b;
  public:
  rectangle()
  {
  l=10;
  b=20;
  }
  friend class square;
};
class square
{ int s;
  public:
  square()
  {
  s=5;
  }
void display(rectangle rect)
{ cout<<rect.l<<"\n";
  cout<<rect.b<<"\n";
  cout<<s;
}
};
void main()
{ clrscr();
  rectangle r;
  square s;
  s.display(r);
  getch();
}