#include <stdio.h>
#include <conio.h>

void sapxep(int a[], int n){
    for(int i = 0; i < n; i ++)
        for(int j = i + 1; j < n; j ++)
    if(a[i] > a[j]) {
        int tmp = a[i] ;
        a[i] = a[j] ;
        a[j] = tmp ;
    }
}

void nhap(int a[][100], int &m, int &n){
	printf("Nhap vao m : ") ;
	scanf("%d", &m) ;
	printf("Nhap vao n : ") ;
	scanf("%d", &n) ;
	printf("Nhap vao matrix : \n") ;
	for(int i = 0; i < m; i ++)
		for(int j = 0; j < n; j ++)
			scanf("%d", &a[i][j] ) ;
}

void process(int a[][100], int m, int n ){
    int tmp[1000], h = 0 ;
    for(int i = 0; i < m; i ++)
        for(int j = 0; j < n; j ++)
            tmp[h++] = a[i][j] ;
    sapxep(tmp,h) ;
    int k = 0;
    for(int i = 0; i < m; i ++)
        for(int j = 0; j < n; j ++)
            a[i][j] = tmp[k++] ;

}

void in (int a[][100], int m, int n ) {
	printf("\nMa tran tich la : \n") ;
	for(int i = 0; i < m ; i ++){
		for(int j = 0; j < n ; j ++)
		printf("%d  ", a[i][j]) ;
		printf("\n") ;
	}
}

main(){
    //freopen("vao.txt", "r", stdin) ;
    int n, m, a[100][100] ;
    nhap(a,m,n) ;
    process(a,m,n) ;
    in(a,m,n) ;
    getch() ;
}
