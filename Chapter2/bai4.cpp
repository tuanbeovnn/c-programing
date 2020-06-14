#include<iostream>
using namespace std;
void soChan(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(i%2 == 0){
            sum += i;
            cout<<"Cac chu so chan la :" <<i<<endl;
        }
    }
    cout <<"tong cua so chan: " << sum <<endl;
}
void soLe(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(i%2 != 0){
            sum += i;
            cout<<"Cac chu so le la :" <<i<<endl;
        }
    }
    cout <<"tong cua so le: " << sum <<endl;
}
void tongSoTuNhien(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
            sum += i;
    }
    cout <<"tong cua so tu nhien: " << sum <<endl;
}
int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    soChan(n);
    soLe(n);
    tongSoTuNhien(n);
    return 0;
}