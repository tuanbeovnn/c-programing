#include<iostream>
#include<math.h>
using namespace std;

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

int tatCaSNT(int n) {
    int number = 0;
    while (n!=0)
    {
        number = n%10;
        n = n / 10;
        if (!checkSNT(number))
        {
            return false;
        }
        
    }
    return true; 
}

int daoso(int n) {
    int rev = 0;
    int num = n;
    while (n != 0)
    {
        rev = (rev*10) + (n%10);
        n/=10;
    }
    if (checkSNT(rev))
    {
        return true;
    }
    return false;
}

int main() {
    int count =0, sum = 0;
    for (int i = 1000000; i < 9999999; i++)
    {
        if(checkSNT(i) && tatCaSNT(i) && daoso(i)){
            cout<<"so nguyen to va tat ca cac so va dao so SNT: "<<i<<endl;
        }
    }
}