#include<iostream>
#include<math.h>
using namespace std;


void nhap(int a[][20], int &m, int &n) {
	

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
		cout << "\n";
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
	
		cout << "Max: " << max << endl;
		cout << "Min: " << min << endl;
}
bool checkSNT(int n) {
    if (n == 0)
        return false;

    for(int i = 2; i <= sqrt(n) ; i ++) {
        if(n%i == 0)
            return false; // logic 2
    }
    return true;
}

void dsSnt(int a[][20], int n) {
    for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j++ ){
			if(checkSNT(a[i][j])){
				cout << "\t" << a[i][j];
			}
		}
	}
}
int main() {
	int a[10][20];
	int n, m;
    cout << "nhap so hang: "<< endl;
    cin >> n;
    cout << "nhap so cot: "<< endl;
    cin >> m;
    cout << "Nhap ma tran: " << endl;
	nhap(a, m,n);
    cout << "Xuat ma tran sau khi nhap: " << endl;
	xuat(a, m,n);

    dsSnt(a, n);


return 0;
}