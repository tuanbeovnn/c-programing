// 1 1 2 3 5 8 13 21 34
// 1 2 3 4 5 6 7  8  9
// n = 2 => 1
// n = 6 => 8
// n = 8 => 21


#include<iostream>
#include<math.h>
using namespace std;


long long timSoFinbonacci(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return timSoFinbonacci(n-1) + timSoFinbonacci(n-2);
    }
}

long long fibo(int n){
    if(n == 0 || n == 1) {
        return 1;
    }
    // neu n = 2
    // f0 = 1, f1 = 1
    long long f0 = 1, f1 = 1, fn;
    // ung voi n = 2, (1)
    // ung voi n = 3, (2)

    // start 0  i < 1 -- chay 1 vong lap
    // vi n = 2 muon i < 1 ==> i < n - 1;

    for(int i = 0; i < n - 1; i ++){
        fn = f0 + f1;
        // cho vong sau
        f0 = f1;
        f1 = fn;
    }

    return fn;
}

int main() {
    int n;

    while(true) {

        do {
            cout << "Nhap n: ";
            cin >> n;
        } while (n <= 0);


        /*for (int i = 0; i < n; i++) {
            cout << timSoFinbonacci(i)<< endl;
        }*/

        cout << "Fibo thu " << n << " la : " << fibo(n) << endl;


    }

    system("pause");
    return 0;

}
