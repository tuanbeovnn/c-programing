#include <iostream>
#include <math.h>
using namespace std;

int tinhN(double x, double c)
{
    int n = 1;

    double nMu_tu = 1;
    double nGiaiThua_mau = 1;

    double value;

    // 1 2 3 4 5 6
    do
    {
        nMu_tu *= x;
        nGiaiThua_mau *= n;

        value = nMu_tu / nGiaiThua_mau;
        n++;
    } while (value > c);

    return n;
}

long giaiThua(int n)
{
    if (n == 0)
        return 1;
    long tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich = tich * i;
    }
    return tich;
}

int main()
{
    int x;
    do
    {
        cout << "Nhap x: ";
        cin >> x;
    } while (x <= 0);

    double res = 0;
    int mu = 0;
    while (res < 0.0001)
    {
        res += pow(x, mu) / giaiThua(mu);
        mu += 1;
    }
    cout << mu - 1; // vì nếu bỏ -1 sẽ lớn hơn 0.0001 nên phải trừ 1
}

/*

int main(){

    double x = 2.2, c = 0.0001;

    cout << tinhN(x,c);

    return 0;
}*/
