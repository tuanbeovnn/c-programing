#include<iostream>
using namespace std;

void xuat(int a[][20],  int m, int n) {
	cout  << endl << "Xuat ma tran " << endl;
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++ ){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}	
}


void nhap(int a[][20], int &m, int &n) {
	cout << "Nhap ma tran: " << endl;
	cout << "nhap so hang: ";
    cin >> m;
    cout << "nhap so cot: ";
    cin >> n;
	
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++ ){
			cin >> a[i][j];
		}
	}
	
	xuat(a,m,n);
}



void chuyenVi(int a[][20], int m, int n, int b[][20]){
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++ ){
			b[j][i] = a[i][j];
		}
	}
}
	

int main() {
	int a[20][20];
    int b[20][20];
	int n, m;
	nhap(a,m,n);
    chuyenVi(a,m,n,b);
    
	xuat(b,n,m);

    return 0;
}


/*

2 3
2 3 4 
5 4 3

*/

