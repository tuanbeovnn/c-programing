#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int checkThuanNghich(int n) {
    int rev = 0;
    int num = n;
    while (n != 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    if (rev == num) {
        return 1;
    } else {
        return 0;
    }
}


int tachSo(int n) {
    int tachSo = 0;
    while (n != 0) {
        tachSo = n % 10;
        n = n / 10;
        if (tachSo != 6 && tachSo != 8 && tachSo != 0) {
            return false;
        }
    }
    return true;
}

int tongCacSo(int n) {
    int sum = 0;
    while (n!=0) {
        sum = sum + n%10;
        n = n / 10;
    }
    if(sum % 10 == 0 ) {
        return 1;
    } else {
        return 0;
    }

}

int main() {
    int count = 0, sum = 0;
    for (int i = 1000000; i < 999999999; i++) {
        if (tongCacSo(i) && tachSo(i) && checkThuanNghich(i) ) {
            cout << setw(10) << i ;
        }
    }
}
