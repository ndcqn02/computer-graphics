#include "iostream"
#include "conio.h"
#include "graphics.h"
#include "math.h"
int color = RED,x,y,R;
void DDX(int x,int y)
{
 putpixel(x,y,color);
 putpixel(y,x,color);
 putpixel(y,-x,color);
 putpixel(x,-y,color);
 putpixel(-x,-y,color);
 putpixel(-y,-x,color);
 putpixel(-y,x,color);
 putpixel(-x,y,color);
}
void MidPoint(int x0,int y0, int R)
{  int x,y, p;
   x=0;
   y=R;
   DDX(x,y);
   p=5/4-R;
   while (x
   {
     if (p<0) p=p+2*x+3 ;
     else
     {
    p= p+2*(x-y)+5;
    y=y-1;
     }
     x=x+1;
     DDX(x+x0,y+y0);
     DDX(x+x0,-y+y0);
     DDX(-x+x0,y+y0);
     DDX(-x+x0,-y+y0);
   }
}
void KhoiTao()
{   //int n,m;
   int n = DETECT;
   int m;
  initgraph(&n,&m,"");
}
