#include <iostream>
using namespace std;

int tinhTongChia7(int n) {
    int sum = 0, i;
    /*for (i = 1; i < n; i++) {
        if (i % 7 == 0) {
            sum += i;
        }
    }*/

    int x = 7;
    if(x < n) return 0;

    while(x <= n){
        sum += x;
        x += 7;
    }

    return sum;
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cua day so chia cho 7: " << tinhTongChia7(n) << endl;

    return 0;
}
