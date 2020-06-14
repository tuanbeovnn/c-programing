#include <iostream>
#include <math.h>
using namespace std;

bool checkSNT(int n){
    if (n == 0)
        return false;
    for(int i = 2; i <= sqrt(n) ; i ++) {
        if(n%i == 0)
            return false; // logic 2
    }
}

void inDaySo(int m,int n){
    for(int i = m; i <= n; i++){
        if (checkSNT(i))
        {
            cout<< "So nguyen to trong day " << i << endl;
        }
    }
}

int main()
{
    int n;
    inDaySo(1,10);
    return 0;
}