#include<iostream>
using namespace std;
void soChan(int n) {
    for (int i = 0; i < n; i++){
        if(i%2 == 0){
            cout<<"Cac chu so chan la :" <<i<<endl;
        }
    }
}
void soLe(int n) {
    for (int i = 0; i < n; i++){
        if(i%2 != 0){
            cout<<"Cac chu so le la :" <<i<<endl;
        }
    }
}
int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    soChan(n);
    soLe(n);
    return 0;
}