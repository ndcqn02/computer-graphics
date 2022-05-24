#include <winbgim.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

float tinhgoc(float goc){
    return (goc*M_PI/180);
}
  
void vekhung(int xtam,int ytam,int bk)
{
 //ham ve hinh tron tam (x,y) ban kinh 250
    int d,x1,y1,x2,y2;
    setlinestyle(0,0,3);//in dam vien
    setcolor(15);
    
    d = 270;
    setcolor(15);
    rectangle(50,50,550,550);
    while(d<=630){
        x1 = xtam + (int)bk*cos(tinhgoc(d));
        y1 = ytam + (int)bk*sin(tinhgoc(d));
  
        x2 = xtam + (int)(bk-20)*cos(tinhgoc(d));
        y2 = xtam + (int)(bk-20)*sin(tinhgoc(d));
        line(x1,y1,x2,y2);//ve duong thang cho 12,3,6,9
        delay(10);
        d+=30;
    }
    d = 270;
    setcolor(15);//mau duong tron
    setlinestyle(0,0,2);
    while(d<=630){
        x1 = xtam + (int)bk*cos(tinhgoc(d));
        y1 = ytam + (int)bk*sin(tinhgoc(d));
      
        x2 = xtam + (int)(bk-8)*cos(tinhgoc(d));
        y2 = xtam + (int)(bk-8)*sin(tinhgoc(d));
        line(x1,y1,x2,y2);
        delay(10);
        d+=6;
    }
}
  
void kimgiay(int bk,int cl,int goc){
    //ve kim giay co ban kinh bk, mau cl, goc bat dau
    int xgiay,ygiay;
  
    setlinestyle(0,0,1);
    setcolor(cl);
    xgiay = 300 + (int)(bk-50)*cos(tinhgoc(goc));
    ygiay = 300 + (int)(bk-50)*sin(tinhgoc(goc));
    line(xgiay,ygiay,300,300);
}
  
void kimphut(int bk,int cl,int goc){
    //ve kim phut
    int xphut,yphut;
    setlinestyle(0,0,3);
    setcolor(cl);
    xphut = 300 + (int)(bk-100)*cos(tinhgoc(goc));
    yphut = 300 + (int)(bk-100)*sin(tinhgoc(goc));
    line(xphut,yphut,300,300);
}
  
void kimgio(int bk,int cl,int goc){
    //ve kim gio
    int xgio,ygio;
    setlinestyle(0,0,3);
    setcolor(cl);
    xgio = 300 + (int)(bk-140)*cos(tinhgoc(goc));
    ygio = 300 + (int)(bk-140)*sin(tinhgoc(goc));
    line(xgio,ygio,300,300);
}
  
void vekim(int bk,float d1,float d2,float d3){
    while(!kbhit()){
        kimgiay(bk,1,d3); //ve kim giay ung voi goc d1
        if (d3==d2) kimphut(bk,2,d2); // may ve cac net chong len nhau nen phai ve lai net cu da mat
        if (d3==d1) kimgio(bk,4,d1);
        kimphut(bk,2,d2);
        if (d2==d1) kimgio(bk,4,d1);
        kimgio(bk,4,d1);
        delay(1000);
        kimphut(bk,0,d2); //xoa di net cu, ve net moi de tao di chuyen
        kimgiay(bk,0,d3);
        kimgio(bk,0,d1);
        d3+=6; d2+=0.1; d1+=1/120;
        setcolor(11); // dat mau cho tam
        circle(300,300,4);
    }
}
void gocdau(int gio,int phut,int giay, float &d1, float &d2, float &d3){
    d3 = giay*6 + 270; // 12h ung voi goc 270
    d2 = phut*6 + giay*0.1 + 270;
    d1 = gio*30 + phut*0.5 + giay*1/120 +270;
}
int main(){
 int bk;
    time_t my_time;
 struct tm * timeinfo; 
 time (&my_time);
 timeinfo = localtime (&my_time);
    float d1,d2,d3;
    gocdau(timeinfo->tm_hour,timeinfo->tm_min,timeinfo->tm_sec,d1,d2,d3);
    initwindow(600,600);//mo cua so do hoa
    outtextxy(10,10,"NguyenThiChung");
    bk = 250;
    vekhung(300,300,bk);
    vekim(bk,d1,d2,d3);
    
    getch();
    closegraph();
}    
