#include <stdio.h>
#include <winbgim.h>

int main(){
	
	initwindow(700,800);
	setcolor(14);
	int i =0;
	setcolor(14);
	setfillstyle(1,14);
	pieslice(300,300,30,-30,100);  // hinh quat
	
	
	while(i<=100){
		setcolor(0);
		setfillstyle(1,15);
		pieslice(300,300,-30,30,100);
		delay(10);
		
		setcolor(0);
		setfillstyle(1,14);
		pieslice(300,300,30,-30,100);  
		
		setfillstyle(1,14);
		circle(300,300,100);
		delay(10);
		
		setfillstyle(1,0);
		fillellipse(300,250,10,10);  // ve hinh elip
		
		setfillstyle(1,14);
		pieslice(300,300,-30,30,100);
		delay(30);
		i++;
	}
	
	
	getch();
	closegraph();
	return 0;
}
