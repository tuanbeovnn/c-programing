#include <iostream>

using namespace std;

int tinhN(double x, double c){
    int n = 1;

    double nMu_tu = 1;
    double nGiaiThua_mau = 1;

    double value;


     // 1 2 3 4 5 6
    do{
        nMu_tu *= x;
        nGiaiThua_mau *= n;

        value = nMu_tu/nGiaiThua_mau;
        n ++;
    }
    while (value > c);


    return n;
}

int main(){

    double x = 2.2, c = 0.0001;

    cout << tinhN(x,c);

    return 0;
}
