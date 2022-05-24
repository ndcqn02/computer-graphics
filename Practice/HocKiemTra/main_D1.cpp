#include <winbgim.h>
#include <math.h>
#include <stdio.h>
// hình xoan hong
#define RADS  0.017453
#define FACT 0.7071

void D(int n,float,float,int);

main()
{
      int n;
      printf("n="); scanf("%d",&n);
      initwindow(1000,600);
      setbkcolor(15); setcolor(5); cleardevice();
      moveto(550, 150);
      D(n, 300, 90,1);
      getch();
      closegraph();
}

void D(int n,float len,float d, int s)
{
	if (n>0){
		d+=45*s;
		D(n-1,len*FACT,d,1);
		d-=90*s;
		D(n-1,len*FACT,d,-1);
	} else linerel(int(len*cos(d*RADS)), int(len*sin(d*RADS)));
}

