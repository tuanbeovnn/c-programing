#include<iostream>
using namespace std;


void nhap(int a[], int &n) {

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
       //cout << "Nhap vao phan tu a[" << i << "] : ";
       cin >> a[i];
    }

}

void xuatHien(int a[], int b[], int n) {
	
	for(int i = 0; i < n; i++){
		b[i] = 0;
	}
	
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j]) 
            {
                b[i]++;
            }
            
        }
    }
    
}
void xuat(int a[], int b[], int n) {
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (b[i] > b[max])
        {
            max = i;
        }
    }

    
    
    cout << "Phan tu co so lan xuat hien nhieu la: " << a[max] << ". So luong la : " << b[max];

}


int main() {
    int a[1000];
    int b[100];
    int n;
    nhap(a, n);
    xuatHien(a,b,n);
    xuat(a, b, n);

    return 0;
}
