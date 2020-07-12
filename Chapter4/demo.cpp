#include<iostream>
using namespace std;


void nhap(int a[][20], int &m, int &n) {
	cout << "Nhap vao m, n: ";
	cin >> m >> n;

	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++ ){
			cin >> a[i][j];
		}
	}
}

void xuat(int a[][20], int m, int n) {
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++ ){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}	
}

void getMaxMin(int a[][20], int &m, int &n) {
	int max = a[0][0];
	int min = a[0][0];
	
	
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++ ){
			if(a[i][j] > max){
				max = a[i][j];
			}
			
			if(a[i][j] < min){
				min = a[i][j];
			}
			
		}
	}
	
		cout << "Max: " << max << endl;
		cout << "Min: " << min << endl;
}
	

int main() {
	int a[10][20];
	int n, m;
	nhap(a, m,n);
	cout << endl;
	xuat(a, m,n);
	cout << endl;
	getMaxMin(a,m,n);

return 0;
}
