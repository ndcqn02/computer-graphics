#include<math.h>
#include<stdio.h>
typedef struct{ //Dinh nghia kieu point
    float x, y;
}Point;

typedef struct{ //Dinh nghia kieu vector
    float dx, dy;
}Vector;

typedef float Affine[3][3]; //Dinh nghia kieu Afine ma tran 3x3 
typedef Affine Matran; //Dinh nghia kieu Matran Afine

void Tinhtien(Affine T, Vector V) //Tao ham tinh tien
{
    T[0][0]=1;T[0][1]=0;T[0][2]=0;
    T[1][0]=0;T[1][1]=1;T[1][2]=0;
    T[2][0]=V.dx; T[2][1]=V.dy; T[2][2]=1;                       
}
void Quay (Affine T, float theta) //Tao ham quay quanh truc theta
{
    float c, s;
    c=cos (theta); s=sin(theta);
    T[0][0]=c; T[0][1]=s; T[0][2]=0;
    T[1][0]=-s; T[1][1]=c; T[1][2]=0;
    T[2][0]=0; T[2][1]=0; T[2][2]=1;
}
void Nghieng(Affine T, float h, float g) //Tao ham nghieng voi do cao h, goc nghien g
{
    T[0][0]=1; T[0][1]=g; T[0][2]=0;
    T[1][0]=h; T[1][1]=1; T[1][2]=0;
    T[2][0]=0; T[2][1]=0; T[2][2]=1;
}

void Codan(Affine T, float Sx, float Sy) //Tao ham Codan voi toa do Sx, Sy
{
    T[0][0]=Sx; T[0][1]=0; T[0][2]=0;
    T[1][0]=0; T[1][1]=Sy; T[1][2]=0;
    T[2][0]=0; T[2][1]=0; T[2][2]=1;
}
void TichMatran(Matran A, Matran B, Matran C){ //Tao ham tich cac ma tran A, B, C

    int i,j,k;
        for (i=0;i<3;i++)
           for(j=0;j<3;j++){
                 C[i][j]=0;
                 for (k=0;k<3;k++)
                  C[i][j]+=A[i][k]*B[k][j];
              }
    }
void TichAffine(Affine A, Affine B, Affine C) // Tao ham tich cac ma tran 3x3 A, B, C
{
   TichMatran(A, B, C);
}
void Biendoi(Affine T, Point P, Point *Q) //Tao ham bien goi cac ma tran
{
   Matran PP={0}, QQ={0};
   PP[2][0]=P.x; PP[2][1]=P.y; PP[2][2]=1;
    TichMatran(PP, T, QQ);
    Q->x=QQ[2][0]; Q->y=QQ[2][1];
}
