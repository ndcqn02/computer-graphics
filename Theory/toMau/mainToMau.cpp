//#include <winbgim.h>
#include <graphics.h>
int main(){
	initwindow(800, 700);

	// ri�ng t� m�u h�m bar chi c�n setfillstyle
	setfillstyle(1,4);
	bar(200,200,500,400);  // trai tren phai duoi
	
// t� m�u  cho h�nh tr�n	
	setcolor(2);
	setfillstyle(1, 2);
	circle(300, 300, 50);
	floodfill(300, 300, 2);
	
// t� m�u cho h�nh rectagle 
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(200,200,100,100); //luu � h�m rectangle ve nguoc ve ph�a tr�i
	floodfill(180, 180, YELLOW);
	
	// dat mau sac tai diem do
	putpixel(100,100,RED);  
	

	// ve da giac
	int p1[10]={10,10,100,100,100,200,0,200,10,10};
	cleardevice();
	setfillstyle(1,2);
	//drawpoly(5,p1);  // ve da giac khong to mau, duong gap khuc
	
	fillpoly(4, p1);   // ve da giac 4 dinh  to mau theo setfillstyle, diem truyen theo mang
						// tu noi  diem cuoi va diem dau
	
	
	
	// ve va to mau hinh quat
	setcolor(14);
	setfillstyle(1,14);
	pieslice(300,300,30,-30,100); // diem t�m x,y, goc bat dau, goc ket thuc, r
	
	
	//ve  va to mau hinh elip
	setfillstyle(1,0);
	fillellipse(300,250,10,10);   // diem t�m x, y, do cao, do dai
	
	getch();
	closegraph();
	return 0;
}
