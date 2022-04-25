#include <winbgim.h>

int main(){
	initwindow(600,600); // set cua so win kinh thuoc 600x600
	setbkcolor(1);
	setcolor(14);
	circle(200,200,100);	 // ve hinh tron voi tham so x, y, r
	delay(5000);
	return 0;
}
