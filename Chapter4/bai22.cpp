#include <stdio.h>
#include <conio.h>

void nhap(int a[], int n){
	printf("Nhap vao day so : ") ;
	for(int i = 0; i <n; i ++)
		scanf("%d", &a[i]) ;
}

void process (int a[], int n) {
	int max = a[0] ;
	h :
	int min = a[0] ;
	for(int i = 1 ; i < n; i ++){
		if(max < a[i] ) max = a[i] ;
        if (min > a[i]) min = a[i] ;
	}
	for(int i = 0; i < n; i ++){
        if(a[i] == min ) printf("%d", a[i]) ;
        else a[i] = max ;
	}
    goto h ;
}


main(){
//	freopen("vao.txt", "r", stdin) ;
	int n, a[100] ;
	scanf("%d", &n) ;
	nhap(a,n) ;
	process(a,n) ;
	getch() ;
}

