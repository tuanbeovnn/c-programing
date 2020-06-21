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
    int dem =0;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    int i = 0;
    while(dem < n){
        if (checkSNT(i))
        {
            cout << "So Nguyen to la: "<<i<< endl;
            dem++;
        }
        i++;
        
    }
     for (i = 0; i < n; i++)
        {
            cout <<"So finbonacci la: " <<timSoFinbonacci(i)<< endl;
        }
    return 0;
}