#include <iostream>
#include <math.h>
using namespace std;

void inSoChinhPhuong(int m, int n){

    int a1 = sqrt(m); // 2.22
    int a2 = sqrt(n); // 10

    int z1 = (a1*a1 == m) ? a1: a1+1;
    int z2 = a2;


    for(int i = z1; i <= z2; i ++){
        cout << i * i << " ";
    }

}

int main()
{
    int n;
    inSoChinhPhuong(1,10);
    return 0;
}