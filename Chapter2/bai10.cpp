#include<iostream>
#include<math.h>
using namespace std;
void phanTichSoNT(int n){
    // 2 3 7 11 17 19 23 ...   (can 2)

    int x = 2;

    int step = 1;

    while (x <= sqrt(n)){
        while(n%x == 0){
            cout << "Step: "  << step << " -- n = " << n << " -- x = " << x << endl;

            cout << x << " " << endl;
            n /= x;
            //getch();
            step ++;
        }
        x++;

    }
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    phanTichSoNT(n);
    return 0;
}