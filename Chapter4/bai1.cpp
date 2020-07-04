#include<iostream>
using namespace std;
void nhap(int a[], int n) {
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

int soLonNhat(int a[], int n) {
    int temp = a[0];
    for (int i = 0; i < n ; i++)
    {
        if (temp < a[i])
        {
            temp = a[i];
        }
        
    }
    return temp;
}

int main() {
    int a[1000];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    cout<<"So lon nhat trong mang: " << soLonNhat(a, n);
    system("pause");
    return 0;
}