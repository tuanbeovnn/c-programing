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


// 4 2 3 9 2 9 8 5 4 9 3

int soLonNhat(int a[], int n) {
    int indexMax = 0;

    for (int i = 0; i < n ; i++)
    {
        if ( a[indexMax] < a[i])
        {
            indexMax = i;
        }

    }

    return indexMax;   // chi so thang lon nhat ==> tra ra max
}



// tham chieu : dia chi =>> toi muon luu lai gia tri thay doi trong ham
// tham tri : gia tri: ==> chi su dung gia tri ==> ko muon luu lai thao tac

int main() {
    int a[1000];
    int n; // gia tri 0x66cee

    cout << "Dia chi: " << &n << endl;

    nhap(a, n);

    cout << "Xuat mang: " << endl;
    xuat(a, n);

    cout << endl;

    int index = soLonNhat(a, n);

    cout<<"So lon nhat trong mang: " << a[index] <<". Index = " << index << endl;
    system("pause");
    return 0;
}
