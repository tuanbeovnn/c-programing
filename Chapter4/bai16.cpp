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
    // 2 4  6 8 10 12
    // 7

    int pos = 0;
	
    /*while (true)
    {
        if(a[pos] > value ){
            break;
        }

        pos ++;
    }*/

    
    while(a[pos] < value){
        pos ++;
    }

    
    return pos;
    
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
    
    int val, pos;
    cout << "Nhap so can them: " << endl;
    cin >> val;
    
   	pos = getPos(a,val);
   
    add(a,n,val,pos);
    cout<<"xuat mang sau khi them" << endl;
    xuat(a,n);
    
    cout << endl;
    system("pause");
    return 0;
}
