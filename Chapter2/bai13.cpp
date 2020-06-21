#include<iostream>
#include<math.h>

using namespace std;

int daoso(int n) {
    int rev = 0;
    int num = n;
    while (n != 0) {
        rev = (rev*10) + (n%10);
        n/=10;
    }
    return rev;
}

int checkThuanNghich (int n) {
    if (daoso(n) == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    if(checkThuanNghich(n)) {
        cout<<"So thuan nghich"<<endl;
    } else {
        cout<<"Ko Phai So thuan nghich"<<endl;
    }
    system("pause");
    return 0;

}
