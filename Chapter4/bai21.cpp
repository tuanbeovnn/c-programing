#include <stdio.h>
#include <conio.h>
void nhap (int  a[], int n) {
	printf("Nhap vao he so : ") ;
	for(int i = 0; i < n; i ++)
		scanf("%d", &a[i])  ;
}

main(){
    //freopen("vao.txt", "r", stdin) ;
	int n , m ,  p[100],  q[100],  a[100], t ;
	printf("Nhap vao so phan tu cua P(X) : ") ;
	scanf("%d", &m) ;
	nhap(p,m) ;
	printf("Nhap vao so phan tu cua P(X) : ") ;
	scanf("%d", &n) ;
	nhap(q,n) ;
	if( m >= n ) t = m ;
	else t = n ;
	m -- ; n -- ;
	for(int i = 0; i < t ; i ++){
		if(m >= 0 && n >= 0)  a[i] =  p[m--] +  q[n--] ;
		else if(m < 0 ) a[i] =  q[n--] ;
		else if(n < 0 )  a[i] =  p[m--] ;
	}

	printf("He so da thuc tong la : ") ;
	for(int i = t -1; i >=0; i --)
		printf("%d  ", a[i])   ;

	getch() ;
}

