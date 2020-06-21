#include<iostream>
#include<math.h>
using namespace std;
bool thuanNghich(int n) {
    int rev = 0;
    int num = n;
    while (n != 0)
    {
        rev = (rev*10) + (n%10);
        n/=10;
    }
    return rev;
    if (rev == num)
    {
        return true;
    }else {
        return false;
    }
}

 int tongCacSo(int n) {
    int sum = 0;
    while (n!=0)
    {
        sum = sum + n%10;
        n = n / 10;
    }
    if(sum % 10 == 0 ){
        return 1;
    }else
    {
        return 0;
    }

}

int main() {
    // for (int i = 100000; i < 1000000; i++)
    // {
    //     if(thuanNghich(i) && tongCacSo(i)){
    //         cout<<"so thuan nghich: " <<i<<endl;
    //     }
    // }
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);


    if (thuanNghich(n) && tongCacSo(n))
    {
        cout<<"so thuan nghich";
    }else {
        cout <<"ko phai";
    }
}