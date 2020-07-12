#include <iostream>

using namespace std;


void nhap(int a[], int &n) {
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        //cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl;
}

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}



void bubbleSort(int arr[], int n) {
    int i, j;
    bool haveSwap = false;

    for (i = 0; i < n-1; i++) {
        // i phần tử cuối cùng đã được sắp xếp
        haveSwap = false;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if(haveSwap == false) {
            break;
        }
    }
}

int max2(int a[], int n) {
    bubbleSort(a,n);

    xuat(a,n);

    int max1 = a[0];

    cout << "Max 1: " << max1 << endl;



    int index2 = 1;

    while(a[index2] == max1) {
        index2 ++;
    }

    cout << "Index 2: " << index2 << endl;

    int max2 = a[index2];

    cout << "Max 2: " << max2 << endl;

}


int soLonNhat2(int a[], int n) {
    int indexMax = 0;

    for (int i = 0; i < n ; i++) {
        if ( a[indexMax] < a[i]) {
            indexMax = i;
        }

    }


    // tim ra 1 index sao cho khac gtri voi indexMax;
    int indexMax2 = 0;

    while(a[indexMax2] == a[indexMax]) indexMax2 ++;


     for (int i = 0; i < n ; i++) {
        if ( a[indexMax2] < a[i] && a[indexMax2] != a[indexMax]) {
            indexMax2 = i;
        }

    }


}

int main() {
    int a[100], n;
    nhap(a,n);

    max2(a,n);

    return 0;
}
