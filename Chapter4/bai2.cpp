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
}

void sapXepTang(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; i++)
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

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phần tử cuối cùng đã được sắp xếp
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if(haveSwap == false){
            break;
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
    sapXepTang(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    return 0;
}