#include <stdio.h>
#include <conio.h>

void nhap(int a[][100], int &n){
	printf("Nhap vao n : ") ;
	scanf("%d", &n) ;
	printf("Nhap vao matrix : \n") ;
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < n; j ++)
			scanf("%d", &a[i][j] ) ;
}
void Quay(int a[][100],int b[][100],int n)
{
   for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         b[i][j]=a[n-1-j][i];
}
void in (int a[][100], int n ) {
	printf("\nMa tran tich la : \n") ;
	for(int i = 0; i < n ; i ++){
		for(int j = 0; j < n ; j ++)
		printf("%d  ", a[i][j]) ;
		printf("\n") ;
	}
}

int main(){
	
	int n, a[100][100], b[100][100], t[100][100] ;
	nhap(a,n) ;
    Quay(a,b,n) ;
	in(b,n) ;
	getch() ;
	return 0 ;
}
