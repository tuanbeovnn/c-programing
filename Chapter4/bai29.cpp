#include <stdio.h>
#include <conio.h>
main(){
	int so ;
	scanf("%d", &so) ;
	int stt = 1 ;
	while(stt <= so ){
 	int n , a[100][100] ;
	scanf("%d", &n) ;
	int v = 1, h = 0, c = 0 , b = 0; 
	while(b <= n/2){
		for(int i = b ; i < n - b; i ++ ) a[b][i] = v ++ ;
		for(int i = b + 1; i < n - b; i ++ ) a[i][n-1-b] = v ++ ;
		for(int i = n - b - 2; i >= b ; i -- ) a[n-b-1][i] = v ++ ;
		for(int i = n - b - 2 ; i > b; i -- ) a[i][b] = v ++ ;
		b ++ ; 
	}
	printf("case %d:\n", stt) ;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			printf("%d ", a[i][j]) ;
		}
		printf("\n") ;
	}	
	stt ++; 
	}
}

