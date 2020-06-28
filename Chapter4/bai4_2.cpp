#include <iostream>

using namespace std;


void nhap(int a[], int &n) {
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
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
            if (arr[j] > arr[j+1]) {
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

void countAll(int a[], int n){
    bubbleSort(a,n);

    for(int i = 0; i < n; i ++){
        int dem = 0;

        if(a[i] == a[i-1] && i > 0){
            continue;
        }

        for(int j = i; j < n; j ++){
            if(a[j] == a[i]){
                dem ++;
            }
        }

        cout << "So " << a[i] << " xuat hien " << dem << " lan !\n";
    }
}

int main(){
    int a[100], n;

    nhap(a,n);

    countAll(a,n);

    return 0;

}
