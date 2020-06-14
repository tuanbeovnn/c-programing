#include<iostream>
using namespace std;
int tongCacSo(int n) {
    int sum = 0;
    while (n!=0)
    {
        sum = sum + n%10;
        n = n / 10;
    }
    return sum;
}
int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cua day so la: " <<tongCacSo(n)<<endl;
    system("pause");
    return 0;
}
 