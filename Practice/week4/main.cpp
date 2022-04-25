#include <stdio.h>
#include <winbgim.h>
int main()
{
   	initwindow(700,750);
	setcolor(9);
   	for(int i=0; i<=560; i+= 70){
   		 line(50+i, 50, 50+i, 330); // ve duong doc nua tren
   		 line(50+i, 400, 50+i, 680); // ve duong doc nua duoi
	   }
	   
	for(int i=0	; i<700; i+= 70){
		line(50, 50+i, 610, 50+i);// ve duong ngang
	}
	
	
	line(260,50, 400, 190); // cheo phai tren
	line(400,50, 260, 190);
	
	line(260,540, 400, 680); // cheo phai duoi
	line(400,540, 260, 680);
	
	rectangle(40, 40, 620, 690);
	rectangle(50, 50, 610, 680);
	
	
	setcolor(8);
	// trang tri
	for(int i=0; i<560; i+=140){// ve duong ngang 1 dau cco
		line(60+i, 250, 70+i, 250);
		line(60+i, 270, 70+i, 270);
									// ve duong dau doc nho 
		line(60+i, 250, 60+i, 240);
		line(60+i, 270, 60+i, 280);
		
		line(180+i, 250, 170+i, 250);// ve duong ngang nho trai
		line(180+i, 270, 170+i, 270);
		
		line(180+i, 250, 180+i, 240);
		line(180+i, 270, 180+i, 280);
		
		
		//duoi
		line(60+i, 460, 70+i, 460);
		line(60+i, 480, 70+i, 480);
									// ve duong dau doc nho 
		line(60+i, 460, 60+i, 450);
		line(60+i, 480, 60+i, 490);
		
		line(180+i, 460, 170+i, 460);// ve duong ngang nho trai
		line(180+i, 480, 170+i, 480);
		
		line(180+i, 460, 180+i, 450);
		line(180+i, 480, 180+i, 490);
	}
	
	for(int i=0; i<540; i+=420){
		line(130+i, 180, 140+i, 180);
		line(100+i, 180, 110+i, 180);
		line(130+i, 200, 140+i, 200);
		line(100+i, 200, 110+i, 200);

			
		line(130+i, 180, 130+i, 170);
		line(130+i, 200, 130+i, 210);
		line(110+i, 180, 110+i, 170);
		line(110+i, 200, 110+i, 210);
		
		
		line(130+i, 530, 140+i, 530);
		line(100+i, 530, 110+i, 530);
		line(130+i, 550, 140+i, 550);
		line(100+i, 550, 110+i, 550);
	
		
		line(130+i, 530, 130+i, 520); // ve duong doc nho duoi
		line(130+i, 550, 130+i, 560);
		line(110+i, 530, 110+i, 520);
		line(110+i, 550, 110+i, 560);
	
	}
	settextstyle(5, 0, 1) ;
	outtextxy(200,360,"NGUYEN DUC CUONG");

	
	getch();
	closegraph();
	return 0;
}
