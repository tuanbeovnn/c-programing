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

int getPos(int a[], int value){
	
}

void add(int a[], int &n, int b[], int m, int pos){
	
	int k = n + m;
	
    /*for (int i = n-1; i >= position ; i--)
    {
        a[i+1] = a[i];
    }*/
    
    for(int i = n + m - 1; i >= n - pos; i -- ){
    	a[i] = a[i-m];
	}
	
	int index = 0;
	for(int i = pos; i < pos + m; i ++){
		a[i] = b[index++];
	}
    
    n = k;
}

int main()
{
    int a[100], b[100], n, m;
    nhap(a, n);
    nhap(b, m);
    
    int pos ;
    cout << "Nhap vao vi tri: ";
    cin >> pos;
    
    
    
    add(a,n,b,m,pos);
    cout<<"xuat mang sau khi them" << endl;
    xuat(a,n);
    
    cout << endl;
    system("pause");
    return 0;
}

/*6 
5 3 2 5 6 9

4
1 2 3 4

2*/
