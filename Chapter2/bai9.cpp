#include<iostream>
#include<math.h>
using namespace std;

bool checkSNT(int n) {
    if (n == 0)
        return false;

    for(int i = 2; i <= sqrt(n) ; i ++) {
        if(n%i == 0)
            return false; // logic 2
    }
    return true;
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    checkSNT(n);
    return 0;
}
