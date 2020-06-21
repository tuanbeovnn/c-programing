#include <iostream>

using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        // in khoang trang
        for(int j = 0; j < n - 1 - i; j ++){
            cout << "  ";
        }
        // in sao
        for(int j = 0; j < 2*i + 1; j ++){
            cout << "* ";
        }

        cout << endl;
    }
}

int main(){
    print(5);
}