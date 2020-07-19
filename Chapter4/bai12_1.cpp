#include<iostream>
#include<ctime>
using namespace std;


void nhap(int a[], int &n ) {

    cout << "Nhap n: ";
    cin >> n;
    int result[1000];
    
	srand((int)time(0));
    
    
    for (int i = 0; i < n; i++)
    {
        result[i] = rand()%100;
        cout << result[i] <<" ";
    }

}

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main() {
    int a[1000];
    int n;
    nhap(a, n);
    return 0;
}
