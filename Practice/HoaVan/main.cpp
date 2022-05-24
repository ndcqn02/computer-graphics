#include <winbgim.h>
#include <math.h>
#include "Affine.h"
#define RADS 0.017453
main(){
	int mx, my, angle;
	float theta, d=230.0;
	Point A={d,0}, B={d,d}, C{0,d};
	Affine T;
	initwindow(1300,700);
	setbkcolor(15); setcolor(9); cleardevice();
	mx=getmaxx(); my=getmaxy(); // Cho man hinh toa do x, y lon nhat
	setviewport(mx/2,my/2,mx, my,0); 
	theta=RADS;
	Quay (T, theta); //Quay ma tran T quanh truc RADS
	for (angle=0; angle<=360; angle++){
		setcolor(2); delay(1);
		line(0,0,int(A.x), int(A.y));
		line(int (A.x), int(A.y),int(B.x), int(B.y));
		line(int(B.x), int(B.y),int(C.x), int(C.y));
		line(int(C.x), int(C.y),0, 0);
		Biendoi(T,A, &A);
		Biendoi(T,B,&B);
		Biendoi(T,C,&C);
		}
	getch();
}










//#include <winbgim.h>
//#include <stdio.h>
//
//#define FACT  0.866 //sqrt(3)/2 COLOR
//
//void K(int,float,float,float,float);
//void Snow(int,float,float,float);
//
//main()
//{
//      int mx, my, n, x, y, R;
//      
//      printf("n=");scanf("%d",&n);
//      initwindow(1000,700);
//      mx=getmaxx(); my=getmaxy();
//      x=mx/2;y=my/2;R=300;
//      setbkcolor(15); cleardevice();
//      setcolor(2);// dat màu
//      setcolor(5); // dat mau
//      
//      Snow(n,x,y,R); // goi ham ve
//	  getch(); //cho
//      closegraph();  // dong chuong trinh do hoaa
//}
//
//void Snow(int n, float x,float y,float R)
//{
//	float a,b,c,d,u,v;
//	
//	a=x-R*FACT; b=y-R/2;
//	c=x+R*FACT; d=y-R/2;
//	u=x; v=y+R;
//	//line(int(a),int(b),int(c),int(d)); line(int(c),int(d),int(u),int(v)); line(int(u),int(v),int(a),int(b));
//	K(n,a,b,c,d);  K(n,c,d,u,v);  K(n,u,v,a,b); // goi ham ve hoa van
//}
//
//void K(int n,float a,float b,float c,float d) 
//{   
//	float u,v;
//	if (n>0){
//		u=a+(c-a)/2+FACT*(d-b)/3; v=b+(d-b)/2+FACT*(a-c)/3; 
//		K(n-1,a,b,a+(c-a)/3,b+(d-b)/3); 	
//		K(n-1,a+(c-a)/3,b+(d-b)/3,u,v);
//		K(n-1,u,v,a+2*(c-a)/3,b+2*(d-b)/3);	
//		K(n-1,a+2*(c-a)/3,b+2*(d-b)/3,c,d);	
//	} else line(int(a),int(b),int(c),int(d));  // ve duong theo tham so a, b,c,d
//}
