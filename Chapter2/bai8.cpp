#include <iostream>

using namespace std;

int UCLN(int a, int b) {
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}

int main(){
    int x = 8, y = 22;

    cout << "UCLN: " << UCLN(x,y) << endl;
    cout << "BCNN: " << BCNN(x,y) << endl;

}