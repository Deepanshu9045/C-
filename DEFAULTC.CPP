#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class num
{ private:
	   int a;
	   int b;
  public:
	   num()
	   {
	    a=10;
	    b=20;
	    }
	    void putno()
	    {
	       cout<<"A="<<a<<"\tB="<<b<<endl;
	    }
  };
  void main()
  {
    clrscr();
   num obj;
   obj.putno();
   getch();
   }

