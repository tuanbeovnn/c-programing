#include<iostream>
using namespace std;
void soChan(int n) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if(i%2 == 0){
            count++;
        }
    }
    cout <<"dem so chan: " << count <<endl;
}


void soLe(int n) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if(i%2 != 0){
           count++;
        }
    }
    cout <<"dem so le: " << count <<endl;
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
