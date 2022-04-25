#include <graphics.h>
#include <stdio.h>
int main(){
        int mh=0, mode;
        initgraph(&mh, &mode, "");
        closegraph();
       	printf("\n Gia tri so cua man hinh la: %d", mh);
        printf("\n Gia tri so mode do hoa la: %d", mode);
getch();
return 0;
}
