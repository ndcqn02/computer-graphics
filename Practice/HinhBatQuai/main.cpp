#include <winbgim.h>

int main(){
	initwindow(700,800);
//	setbkcolor(15);
	circle(200,200,200);  // hinh tron lon

	


	setcolor(15);
	setfillstyle(1, 15);
	circle(200,300,101);  // hinh tron duoi
	floodfill(200, 300, 15);
	
	
		
		
		
	setcolor(0);
  	circle(200,100,101);   // hinh tron tren
		
	//floodfill(300, 200, 15);
		
	setcolor(15);
	setfillstyle(1, 15);		
	circle(200,100,20);	 // hinh tron nho tren
	floodfill(200, 100, 15);	
		
	setcolor(0);
	setfillstyle(1, 0);	
	circle(200,300,20); // hinh tron nho duoi
	floodfill(200, 300, 0);
			
			
		
			
	getch();	
   	closegraph();
   	return 0;
}
