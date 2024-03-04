
#include<conio.h>
#include<iostream.h>
class num
{ private:
	   int m;
	   int n;
  public:
	   num(int a,int b)
	   {   m=a;
	       n=b;
	   }
	   void putno()
	    {     cout<<"A="<<m<<"\tB="<<n<<endl;
	    }
  };
  void main()
  {
    clrscr();
   num obj(10,20);
   obj.putno();
   getch();
   }