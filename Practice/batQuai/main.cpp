#include <winbgim.h>
#include<math.h>

void MPCircle(int x0, int y0, int R){
		int x, y, c, p; 
		x = 0; y = R; p = 1 - R ;
		c = getcolor() ;
		while (x <= y){
			putpixel(x0+x,y0+y,c); 
			//putpixel(x0-x,y0+y,c); 
			putpixel(x0+x,y0-y,c);
			//putpixel(x0-x,y0-y,c); 
			putpixel(x0+y,y0+x,c); 
			putpixel(x0+y,y0-x,c); 
			//putpixel(x0-y,y0+x,c); 
			//putpixel(x0-y,y0-x,c); 
			if (p<0) p += 2*x + 3;
			else { p += 2*(x - y) + 5; y-- ;}
			x++ ;
	}
}
void MPCircle1(int x0, int y0, int R){
		int x, y, c, p; 
		x = 0; y = R; p = 1 - R ;
		c = getcolor() ;
		while (x <= y){
			//putpixel(x0+x,y0+y,c); 
			putpixel(x0-x,y0+y,c); 
			//putpixel(x0+x,y0-y,c); 
			putpixel(x0-x,y0-y,c); 
			//putpixel(x0+y,y0+x,c); 
			//putpixel(x0+y,y0-x,c);
			putpixel(x0-y,y0+x,c); 
			putpixel(x0-y,y0-x,c); 
			if (p<0) p += 2*x + 3;
			else { p += 2*(x - y) + 5; y-- ;}
			x++ ;
	}
}
void ToMauDuongTron(int xc,int yc, int R,int c){
    for(int y=yc-R;y<=yc+R;y++)
        for(int x=xc-R;x<=xc+R;x++)
		{
	        float d=sqrt((x-xc)*(x-xc)+(y-yc)*(y-yc));
	        if(d<R)
		            putpixel(x,y,c);
        }
}
void ToMauDuongTron1(int xc,int yc, int R,int c){
    for(int y=yc-R;y<=yc+R;y++)
        for(int x=xc-R;x<=xc+R;x++)
		{
	        float d=sqrt((x-xc)*(x-xc)+(y-yc)*(y-yc));
	        if(d<R)
			{
		        if(x>xc)
		            putpixel(x,y,c);
		       
            }
        }
}
int main(int argc, char** argv) {
	initwindow(800,800);
	ToMauDuongTron1(400,400,200,15);
	ToMauDuongTron(400,300,100,15);
	ToMauDuongTron(400,500,100,0);
	
	ToMauDuongTron(500,300,20,0);
	ToMauDuongTron(300,500,20,15);
	setcolor(15);
	circle(400,400,200);
	
	getch();
	closegraph();
	return 0;
	
}
