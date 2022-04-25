//Ve duong tron tam (x0,y0) bang thuat toan Midpoint
#include <winbgim.h>


void MPCircle(int x0, int y0, int R){
		int x, y, c, p; 
		x = 0;
		y = R; 
		p = 1 - R ;
		c = getcolor() ;
		while (x <= y){
			putpixel(x0+x,y0+y,c); putpixel(x0-x,y0+y,c); 
			putpixel(x0+x,y0-y,c); putpixel(x0-x,y0-y,c); 
			putpixel(x0+y,y0+x,c); putpixel(x0+y,y0-x,c); 
			putpixel(x0-y,y0+x,c); putpixel(x0-y,y0-x,c); 
			if (p<0) 
				p += 2*x + 3;
			else { 
				p += 2*(x - y) + 5; 
				y-- ;
			}
			x++ ;
		}
}
main()
{
	initwindow(1000,600);
	setwindowtitle("Ve duong tron YingYang");
	setbkcolor(0); cleardevice();
	while(true){
		int x, y, r;
		int R, B, G;
		x = rand()%800;
		y = rand()%600;
		r = rand()%300;
		R = rand()%256;
		B = rand()%256;
		G = rand()%256;
		setcolor(COLOR(R,B,G));
		delay(35);
		MPCircle(x,y,r);
		if(kbhit()){
			break;
		}			
	}
	getch();
	closegraph();
}
