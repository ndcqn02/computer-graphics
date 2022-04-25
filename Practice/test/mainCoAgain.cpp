#include <stdio.h>
#include <winbgim.h>


void Draw(int x, int y, int i){
	if(i%2==0){
		setfillstyle(1,15);
	}else{
		setfillstyle(1,0);
	}
	bar(x, y,x*50,y*50);
}


int main(){
	initwindow(600,800);
	for(int i=0; i<8; i++){
		for(int j =0; j<8; j++){
			Draw(i*50, j*50,i+j);
		}
	}
	getch();
	closegraph();
}
