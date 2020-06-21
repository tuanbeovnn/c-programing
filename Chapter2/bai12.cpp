// 1 1 2 3 5 8 13 21 34
// 1 2 3 4 5 6 7  8  9
// n = 2 => 1
// n = 6 => 8
// n = 8 => 21


#include<iostream>
#include<math.h>
using namespace std;
int timSoFinbonacci(int n) {
   if(n == 0 || n == 1){
       return n;
   }else
   {
       return timSoFinbonacci(n-1) + timSoFinbonacci(n-2);
   }
   
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        cout << timSoFinbonacci(i)<< endl;
    }
    system("pause");
    return 0;
    
}