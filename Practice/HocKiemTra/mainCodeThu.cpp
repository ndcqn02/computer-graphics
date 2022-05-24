//#include <stdio.h>  // hinh D hong
//#include <winbgim.h>
//#include <math.h>
//#define RADS 0.017453
//#define FACT 0.7071
//
//void D(int n, float len, float d, int s ){
//	if(n>0)	{
//		d+=45*s;
//		D(n-1, len*FACT, d,1);
//		d-=90*s;
//		D(n-1, len*FACT, d,-1);  // tru 1
//	}else linerel(int(len*cos(d*RADS)), int(len*sin(d*RADS)));
//
//}
//
//
//
//int main (){
//	int n;
//	printf("n = "); scanf("%d",&n);
//	initwindow(1300,700);
//	setbkcolor(15);
//	setcolor(5);
//	cleardevice();
//	moveto(550,150); // doi toi vtri
//	D(n, 300,90,1);
//	
//	getch();
//	closegraph();
//	return 0;
//	
//		
//}


  // bài Duong C
//#include <stdio.h>
//#include <winbgim.h>
//
//void C(int n, int a, int b, int c,int d){
//	if(n>0){
//		C(n-1, a,b,(a+b+c-d)/2, (-a+b+c+d)/2);
//		C(n-1,(a+b+c-d)/2,(-a+b+c+d)/2, c,d);
//	}else line(a,b,c,d);  ///
//}
//
//
//int main(){
//	int n;
//	printf("n = ");
//	scanf("%d",&n);
//	initwindow(1300,700);
//	setbkcolor(15); setcolor(1); cleardevice();
//	C(n,500,200,500,500);
//	
//	getch();
//	closegraph();
//	return 0;
//}


  // bài Tuyet K
//#include <winbgim.h>
//#include <stdio.h>
//
//#define FACT  0.866 //sqrt(3)/2
//void K(int ,float ,float ,float ,float ) ;
//void Snow(int, float ,float ,float );
//main()
//{
//      int mx, my, n, x, y, R=200;
//      
//      initwindow(1320,710);
//      mx=getmaxx(); my=getmaxy();
//      y=my/2; 
//	  x =mx/2;
//	  n=5;
//      setbkcolor(15); 
//	  cleardevice();
//      setcolor(1);
//      Snow(n,x,y,R);
//      getch();
//      closegraph();
//}
//
//void Snow(int n, float x,float y,float R)
//{
//	float a,b,c,d,u,v;
//	
//	a=x-R*FACT; b=y-R/2;
//	c=x+R*FACT; d=y-R/2;
//	u=x; v=y+R;
// 	K(n,u, v,a,b);  K(n,c,d,u,v);  K(n,a,b,c,d);
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
//	} else line(int(a),int(b),int(c),int(d));
//}


















// Ve Hinh hoa van 3  co tam giac/tuyet
//
//#include <stdio.h>
//#include <winbgim.h>
//#define FACT 0.866
//
//void K(int n, float a, float b, float c, float d){
//	float u,v;
//	if(n>0){
//		u=a+(c-a)/2+FACT*(d-b)/3;	v= b+(d-b)/2 +FACT*(a-c)/3;
//		K(n-1,a,b, a+(c-a)/3, b+(d-b)/3);
//		K(n-1, a+(c-a)/3, b+(d-b)/3,u,v);
//		K(n-1,u,v, a+2*(c-a)/3, b+2*(d-b)/3);
//		K(n-1, a+2*(c-a)/3, b+2*(d-b)/3,c,d);
//	}else line(a,b,c,d);
//}
//
//void SNOW(int n, float x, float y, float R){
//	float a,b,c,d,u,v;
//	a= x-R*FACT; b=y-R/2;
//	c= x+R*FACT; d=y-R/2;
//	u =x; v=y+ R;
////	line(a,b,u,v);	line(u,v,c,d);	line(c,d,a,b);
////	K(n,a,b,u,v); K(n,u,v,c,d);	K(n,c,d,a,b);
//	
//	K(n,u,v,a,b); 	K(n,c,d,u,v);	K(n,a,b,c,d);  // ve hinh tuyet
//}
//
//int main(){
//	initwindow(1300,700);
//	int n,x,y,mx,my,R=200;
//	mx= getmaxx(); my=getmaxy();
//	y=my/2; x=mx/2;	n=5;
//	setbkcolor(15); cleardevice(); setcolor(9);
//	SNOW(n,x,y,R);								// ve hinh tuyet
//	
////	for(y=R; y<mx; y+=2*R){						
////		for(x=R; x<mx; x+=2*R){
////			setcolor(COLOR(x,y,x*y));
////			SNOW(n,x,y,R);
////		}
////	}
////	
//	getch();
//	closegraph();
//	return 0;
//}


////
#include<stdio.h>
#include<winbgim.h>
#include <math.h>
#define RADS 0.017453
#define FACT 0.7071

void D(int n, float len, float d, float s){
	if(n>0){
		d+=45*s;
		D(n-1,len*FACT,d,1);
		d-=90*s;
		D(n-1,len*FACT,d,-1);
	}else linerel(len*cos(d*RADS), len*sin(d*RADS));
}



int main (){
	int n;
	printf("n=");	scanf("%d",&n);
	initwindow(1300,700);
	setbkcolor(15); cleardevice(); setcolor(5);
	moveto(550,150);
	D(n,300,90,1);
	getch();
	closegraph();
	return 0;
}




