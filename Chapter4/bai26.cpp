#include<iostream>
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


void tich(int a[20][20], int b[20][20], int m, int n, int p)
{
    int c[20][20], i,j,k;
    for (int i = 0; i < p; i++)
    {
        c[i][j] = 0;
        for ( k = 0; k < n; k++)
        {
            c[i][j] = c[i][j]+a[i][k]*b[k][j];
            cout << c[i][j];
        }
        cout <<"\n";
    }
}
	

int main() {
	int a[20][20];
    int b[20][20];
	int n, m, p;
    cout << "nhap so hang: "<< endl;
    cin >> n;
    cout << "nhap so cot: "<< endl;
    cin >> m;
    cout << "Nhap ma tran: " << endl;
	nhap(a,m,n);
    cout << "Xuat ma tran dau tien sau khi nhap: " << endl;
	xuat(a,m,n);

    cout << "nhap so hang: "<< endl;
    cin >> n;
    cout << "nhap so cot: "<< endl;
    cin >> m;
    cout << "Nhap ma tran: " << endl;
	nhap(b,m,n);
    cout << "Xuat ma tran thu hai sau khi nhap: " << endl;
	xuat(b,m,n);
    tich(a,b,m,n,p);

    return 0;
}