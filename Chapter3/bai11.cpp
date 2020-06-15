#include<iostream>
#include<math.h>
using namespace std;
int daoso(int n) {
    int rev = 0;
    int num = n;
    while (n != 0)
    {
        rev = (rev*10) + (n%10);
        n/=10;
    }
    return rev;
}

int checkThuanNghich (int n){
    if (daoso(n) == n)
    {
        return 1;
    }else {
       return 0;
    }
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
    for (int i = 0; i < 200; i++)
    {
        if(checkThuanNghich(i)){
            cout<<"so thuan nghich: " <<i<<endl;
            count ++;
        }
        if(checkSNT(i)){
            cout<<"so nguyen to: "<<i<<endl;
        }
    }
    cout<<"Cac chu so thuan nghich: "<<count<<" so"<<endl;
    
}