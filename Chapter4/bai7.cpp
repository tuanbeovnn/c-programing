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

void demle(int a[], int n) {
    int b, c, sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 !=0)
        {
            count++;
        }
        
    }
    cout << "Dem cac chu so le: " <<  count << endl;
}

void demChan(int a[], int n) {
    int b, c, sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 ==0)
        {
            count++;
        }
        
    }
    cout << "Dem cac chu so chan: " <<  count << endl;
}

int main() {
    int a[1000];
    int n;
    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    cout << endl;
    demle(a,n);
    demChan(a,n);
    system("pause");
    return 0;
}
