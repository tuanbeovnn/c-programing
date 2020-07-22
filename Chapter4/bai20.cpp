#include <stdio.h>
#include <conio.h>

void nhap(int a[], int n)
{
    printf("Nhap vao day a : ") ;
    for(int i = 0; i < n ; i ++)
        scanf("%d", &a[i]) ;
}

int Px(int a[],int x,int i,int n)
{
if(i==1) return a[n]*x+ a[n-1];
else return Px(a,x,i-1,n)*x +a[n-i];
}

main()
{
//    freopen("vao.txt", "r", stdin) ;
    int n , x, a[100];
    printf("Nhap vao so phan tu cua day : ") ;
    scanf("%d", &n) ;
    nhap(a,n) ;
    printf("Nhap vao so x : ") ;
    scanf("%d", &x) ;
    printf("Ket qua cua P(%d) = %d",x, Px(a,x,n,n) ) ;
    getch() ;
}

