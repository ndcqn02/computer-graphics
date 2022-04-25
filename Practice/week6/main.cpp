#include <stdio.h>
#include <conio.h>
//#include <graphics.h>
#include <winbgim.h>
int c = 50;

void Draw(int x,int y,int i){
    if (i%2==0){ 
        setfillstyle(1,15);
    }
    else{
        setfillstyle(1,0);

    }
    bar(x,y,x+50,y+50);  // ve hinh chu nhat
}

int main(){
    initwindow(800,600);
    int k = 0;
    for(int i=0;i<8;i++) // hang tang theo chieu ngang
     for(int j=0;j<8;j++){ // cot tang theo chieu doc
      Draw(i*50,j*50,i+j);  // i+j  to mau nguoc theo tung cot va so le hang
      delay(30);
  }
      
    getch();
    return 0;
}
