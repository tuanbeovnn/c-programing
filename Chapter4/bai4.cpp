#include <iostream>
using namespace std;
void nhap(int a[], int n)
{
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
    cout << endl;
}

void demPhanTu(int a[], int n)
{
    int count = 0;
    int temp = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == temp)
        {
            count++;
        }
    }
    cout << "So phan tu " << temp << " xuat hien trong Mang la: " << count;
}

void dem(int a[], int n)
{
    int temp = a[0];
    int count = 0;
    int tracking[100];
    for (int i = 0; i < n; i++)
    {
        tracking[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (tracking[i] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
            cout << "Phan tu " << a[i] << " : " << count << endl;
            count = 0;
            for (int k = 0; k < n; k++)
            {
                if (a[k] == a[i])
                {
                    tracking[k]=1;
                }
            }
            
        }

    }
}

int main()
{
    int a[100];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    dem(a, n);
    return 0;
}