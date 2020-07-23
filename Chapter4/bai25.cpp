#include <stdio.h>
#include <conio.h>

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

void nhan(int A[][100], int B[][100],int  C[][100],int m,int n,int p ){
	for(int i = 0; i<m; i++)
  		for(int k = 0; k<p; k++) {
   		C[i][k]=0;
  		for(int j = 0; j<n; j++)
   		C[i][k] = C[i][k]+A[i][j]*B[j][k];
  		}

}

void in (int a[][100], int m, int n ) {
	printf("\nMa tran tich la : \n") ;
	for(int i = 0; i < n ; i ++){
		for(int j = 0; j < m ; j ++)
		printf("%d  ", a[i][j]) ;
		printf("\n") ;
	}
}

int main(){
//	freopen("vao.txt", "r", stdin) ;
	int na, ma, nb, mb, a[100][100], b[100][100], t[100][100] ;
	nhap(a,ma,na) ;
	nhap(b,mb,nb) ;
	if(na != mb) {
		printf("Khong nhan duoc ma tran") ;
		return 0 ;
	}
	nhan(a,b,t,ma,na,nb) ;
	in(t,ma,nb) ;
	getch() ;
	return 0 ; 
}
