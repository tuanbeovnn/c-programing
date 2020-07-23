#include <iostream>
using namespace std;

void nhap(int a[], int &n)
{

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

bool checkTangDan(int a[], int n) {
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] > a[i+1])
        {
            return i;
        }
        
    }
    return -1;
    
}

int main()
{
    int a[1000];
    int n;
    nhap(a, n);
    
    int val, pos;
    cout << "Nhap so can them: " << endl;
    cin >> val;
    
   
    cout<<"xuat mang sau khi them" << endl;
    xuat(a,n);
    
    cout << endl;
    system("pause");
    return 0;
}
