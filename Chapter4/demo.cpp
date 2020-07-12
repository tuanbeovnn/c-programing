#include <iostream>

using namespace std;

void doiCho(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    cout << "Step 2: Gia tri a, b - " << a << " , " << b << endl; // 7 4
}

// truyen tham so, truyen tham tri

int main(){
    int a, b ;
    cout << "Nhap vao a, b: ";
    cin >> a >> b ;


    cout << "Step 1: Gia tri a, b - " << a << " , " << b << endl; // 4 7
    doiCho(a, b);

    cout << "Step 3: Gia tri a, b - " << a << " , " << b << endl; // 4 7  |  7 4

    return 0;
}
