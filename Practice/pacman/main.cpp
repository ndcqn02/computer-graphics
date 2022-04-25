#include <winbgim.h>
#include <stdio.h>
#include <math.h>`

void PointCircle(int R)
{
	int x, y;
	x = R*sqrt(2)/2;
	for(int i = 0;i <= x; i++)
	{
		y = sqrt(R*R - i*i);
		line(0,0,y,i);line(0,0,y,-i);
		line(0,0,-y,i);line(0,0,-y,-i);
		line(0,0,i,y);line(0,0,i,-y);
		line(0,0,-i,y);line(0,0,-i,-y);
		putpixel(i,y,0);putpixel(y,i,0);
		putpixel(-i,y,0);putpixel(-y,i,0);
		putpixel(i,-y,0);putpixel(y,-i,0);
		putpixel(-i,-y,0);putpixel(-y,-i,0);
	}
	setcolor(0);
	line(0,0,R-1,0);delay(10);
}
void MoveCircleO(int R)
{
	int x, y;
	x = R*sqrt(2)/2;
	y = 0;
	setcolor(15);line(0,0,R-1,0);
	putpixel(R,0,15);
	for(int i = 0;i <= x; i++)
	{
		y = sqrt(R*R - i*i);	
		setcolor(0);
		line(0,0,y,i);line(0,0,y,-i);		
		delay(1);
		setcolor(15);
		line(0,0,y,i);line(0,0,y,-i);
		putpixel(y,i,15);putpixel(y,-i,15);
	}
}
void MoveCircleC(int R)
{
	int x, y;
	x = R*sqrt(2)/2;
	y = 0;
	for(int i = x;i >= 0; i--)
	{
		y = sqrt(R*R - i*i);
		setcolor(0);
		line(0,0,y,i);line(0,0,y,-i);
		putpixel(y,i,0);putpixel(y,-i,0);delay(1);
		setcolor(11);
		line(0,0,y,i);line(0,0,y,-i);
	}
}
int main() 
{
	initwindow(1000,500);
	setbkcolor(15);
	cleardevice();
	setviewport(500,250,1000,500,0);
	setcolor(11);
	PointCircle(100);
	while(1)
	{
		MoveCircleO(100);
		MoveCircleC(100);
	}
	getch();
	closegraph();
	return 0;
}
