#include <iostream>
#include <math.h>
using namespace std;

int tinhN(double x, double c) {
    int n = 1;

    double nMu_tu = 1;
    double nGiaiThua_mau = 1;

    double value;

    // 1 2 3 4 5 6
    do {
        nMu_tu *= x;
        nGiaiThua_mau *= n;

        value = nMu_tu / nGiaiThua_mau;
        n++;
    } while (abs(value) > c);

    return n;
}

long giaiThua(int n) {
    if (n == 0)
        return 1;
    long tich = 1;
    for (int i = 1; i <= n; i++) {
        tich = tich * i;
    }
    return tich;
}

double tinhN2(double x, double c) {
    double res = 0;
    int n = 1;

    long long gt = 1;

    do {
        gt *= n;  // 1 = 1! * 2 = 2!
        res = (double)pow(x, n) / gt;
        n ++; // n = 2
    } while (abs(res) > c);

    /*res += (double)pow(x, 0) / giaiThua(0);
    while(res > c){
       n ++;
       res += (double)pow(x, n) / giaiThua(n);
    }*/


    return n;
}

double tinhE(double x, double c) {
    long long n = tinhN2(x,c);
    double result = 0;
    long long gt = 1;

    for(int i = 0; i <= n; i ++ ) {
        if(i != 0) {
            gt *= i;
        }
        result += (double)pow(x, i) / gt ;
    }

    return result;
}

int main() {

    double x;
    do {
        cout << "Nhap x: ";
        cin >> x;
    } while (x <= 0);

    double c = 0.00001;

    cout << tinhE( x, c);

}

/*

int main(){

    double x = 2.2, c = 0.0001;

    cout << tinhN(x,c);

    return 0;
}*/
