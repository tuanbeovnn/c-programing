#include <iostream>
#include <math.h>
using namespace std;

long giaiThua(int n) {
    if(n==0) return 1;
    long tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich= tich*i;
    }
    return tich;
    
}

int main()
{
    int x;
    do {
        cout << "Nhap x: ";
        cin >> x;
    } while (x <= 0);

    double res = 0;
    int mu = 0;
    while (res < 0.0001)
    {
        res+= pow(x,mu)/giaiThua(mu);
        mu += 1;
    }
    cout<< mu - 1;// vì nếu bỏ -1 sẽ lớn hơn 0.0001 nên phải trừ 1
    
}