#include <iostream>
#include <winbgim.h>
#define Round(a) (int)(a+0.5)   // lam tron so
#define DELAY 10
using namespace std ;
int color = 15;
   
void lineDDA(int x1, int y1, int x2, int y2){       // thuat toan DDA
    int x_unit = 1, Dx = x2 - x1, Dy = y2 - y1;     // Khoi tao cac gia tri ban dau
    int x = x1;
    float y = y1;
    float m = (float)Dy/Dx;     // he so goc m
    putpixel(x, Round(y), color);  // ve 1 diem tai tai do (x,y) !! y da lam tron, theo mau 
       
    while(x < x2){ // so sanh de lay ra khoang cach dai hon, ve duoc nhieu diem anh hon, anh dep hon
        delay(10);  // thoi gian tre khi ve 1 diem anh
        x += x_unit;
        y += m;
        putpixel(x,Round(y), color);
    }
}
int main(){
    int gd,gm=VGAMAX; gd=DETECT;
    initgraph(&gd,&gm,NULL);        // khoi tao cua so do hoa
    lineDDA(0,0, 300, 200);      // ve duong thang
    //line(50,150,400,400);
    
    delay(50000);
    return 0;
}
