#include <iostream>
using namespace std;

float tinhTongPhanSo(float n) {
    float sum = 0;
    for (float i = 1; i < n; i++) {
        sum += 1 / (float)i;
    }
    return sum;
}

int main() {
    float n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cua day so la: " << tinhTongPhanSo(n) << endl;
    return 0;
}
