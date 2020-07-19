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

void tbc(int a[], int n) {
    int b, c, sum = 0, count = 0;
    float result = 0;
    cout << "Nhap trong khoang tu: "<< endl;
    cin >> b;
    cout << "Nhap trong khoang den: "<< endl;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b && a[i] < c)
        {
            sum += a[i];
            count ++;
        }
    }
    
    
    // 1 2 3 4 5 6 7 8 9 10 ==>> count = 1 
    //  2 8
    
    result = (float)sum / count;
    cout << " Tong tbc cua cac so trong khoang b & c: " << result << endl;
    

}

int main() {
    int a[1000];
    int n;
    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    cout << endl;
    tbc(a,n);
    system("pause");
    return 0;
}
