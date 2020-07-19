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

void sapXep(int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void add(int a[], int &n, int value, int position) 
{
    for (int i = n -1; i >= position ; i--)
    {
        a[i+1] = a[i];
    }
    a[position] = value;
    n++;
    
}

int main()
{
    int a[1000];
    int n;
    nhap(a, n);
    cout << "them phan tu: " << endl;
    int val, pos;
    cout << "Nhap so can them: " << endl;
    cin >> val;
    cout << "Nhap vi tri: " << endl;
    cin >> pos;
    add(a,n,val,pos);
    cout<<"xuat mang sau khi them" << endl;
    xuat(a,n);
    sapXep(a, n);
    cout << "sap xep: " << endl;
    xuat(a, n);
    cout << endl;
    system("pause");
    return 0;
}
