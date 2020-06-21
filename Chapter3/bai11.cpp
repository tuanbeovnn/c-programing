#include<iostream>
#include<math.h>
using namespace std;
int checkThuanNghich(int n)
{
    int rev = 0;
    int num = n;
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    if (rev == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int tachSo(int n)
{
    int tachSo = 0;
    while (n != 0)
    {
        tachSo = n % 10;
        n = n / 10;
        if (tachSo == 4)
        {
            return false;
        }
    }
    return true;
}

bool checkSNT(int n ){
    if(n == 0) return false;
    for(int i = 2; i<= sqrt(n); i++){
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() {
    int count =0, sum = 0;
    for (int i = 1000000; i <= 9999999; i++)
    {
        if(tachSo(i) && checkSNT(i) &&  checkThuanNghich(i)){
            cout<<"so thuan nghich: " <<i<<endl;
            count ++;
        }
    }
    
}