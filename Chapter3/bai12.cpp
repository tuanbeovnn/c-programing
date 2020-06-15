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
bool checkSNT(int n ){
    if(n == 0) return false;
    for(int i = 2; i<= sqrt(n); i++){
        if (n%2==0)
        {
            return false;
        }
    }
    return true;
}
int main() {
    int count =0, sum = 0;
    for (int i = 1000000; i < 9999999; i++)
    {
        if(checkSNT(i) && checkSNT(tongCacSo(i))){
            cout<<"so nguyen to va tong cac chu so: "<<i<<endl;
        }
    }
}