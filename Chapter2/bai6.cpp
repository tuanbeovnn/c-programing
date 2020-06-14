#include <iostream>
using namespace std;

int tinhTongChia7(int n)
{
    int sum = 0, i;
    for (i = 1; i < n; i++)
    {
        if (i % 7 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cua day so chia cho 7: " << tinhTongChia7(n) << endl;

    return 0;
}