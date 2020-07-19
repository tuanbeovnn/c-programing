#include<iostream>
using namespace std;


void nhap(int a[], int &n) {

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
       cout << "Nhap vao phan tu a[" << i << "] : ";
       cin >> a[i];
    }

}

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int checkDoiXung(int a[], int n) {
    for (int i = 0; i < n/2; i++)
    {
        int x1 = a[i];
        int x2 = a[n-1-i];
        if (x1 != x2)
        {
            return -1;
        }
    }
    return 1;
    
}

int main() {
    int a[1000];
    int n;
    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    cout << endl;
    checkDoiXung(a,n);
    
    return 0;
}
