#include <winbgim.h>
#include <conio.h>
int main(){
	initwindow(600,600);
	setcolor(14);
	

	
	while(true){ // lap cho luon luon nhay
		int r = 800;
		for(int i = 20; i <=100; i+=2){ // ve cac hinh tron voi ban kinh khac nhau
			setcolor(15-i);
			circle(300,300,r*4/(i)); // ve hinh tron va truyen tham so ban kinh
			circle(300,300,r*3/(i));
			circle(300,300,r*5/(i));
			circle(300,300,r*2/(i));
			circle(300,300,r/(i));
			delay(8);  //  set thoi gian xuat hien
			cleardevice();  
			line(300,300,250,400); // ve chan day thu1
			line(300,300,350,400); // ve chan day thu2
			line(250,400,350,400); // ve chan day thu3
		}
		
		setcolor(5);
		delay(50);
		
	}
	
	delay(5000);
	getch();
	return 0;
}
