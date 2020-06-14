#include<iostream>
#include<math.h>
using namespace std;
int tongCacSo(int n) {
    int sum = 0;
    while (n!=0)
    {
        sum = sum + n%10;
        n = n / 10;
    }
    return sum;
}
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
    cout<<"Tong cac chu so "<<tongCacSo(n)<<endl;
    for (int i = 2; i <=n; i++)
    {
        while (n%i==0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    
    return 0;
}