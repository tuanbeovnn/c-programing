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