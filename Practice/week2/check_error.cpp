
#include <stdio.h>
#include <conio.h>
#include <winbgim.h>
#include <stdlib.h>
int main()
{
   	initwindow(600,400);
   	int maloi;
	if ( (maloi=graphresult()) != 0)
	{
	  printf("khong the khoi dong do hoa \n");
	  printf("ma loi : %d \n",maloi);
	  printf("Ten loi: %s",grapherrormsg(maloi));
	  printf("\n an phim bat ky de thoat");
	  getch();
	  exit(1);
	}
	else{
		printf("Khong co loi");
	}
	circle(300,200,100);
	setcolor(5);
	getch();
	closegraph();
	return 0;
}
