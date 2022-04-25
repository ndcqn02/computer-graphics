#include <iostream>
#include <winbgim.h>
//#define Round(a) (int)(a + 0.5);


void lineDDA(int x1, int y1, int x2, int y2){
	int x_unit = 1, Dx = x2-x1, Dy = y2 -y1;
	int x = x1;
	float y = y1;
	float m = Dy/Dx; // he so goc
//	putpixel(x, Round(y),15);
	while(x < x2){
		delay(5); // thoi gian tra ve sau 1 pixel
		x +=x_unit;
		y += m;
	//	putpixel(x,Round(y), 15);
		
		
	}
//int main(){
//	int gd, gm = VGAMAX; gd = DETECT;
//	initgraph(&gd,&gm,NULL);   
//	setcolor(5);
//	outtextxy(250,20,"cuong");
//	lineDDA(50,150,300,200);
//	delay(5000);
//	return 0;
//}
	

