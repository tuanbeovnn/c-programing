#include<iostream>
using namespace std;
void hinhchunhatRong(int col,int row) {
    int i;
    int j;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1|| j == 0 || j == col - 1) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout <<"\n";
    }
}

int main() {
    hinhchunhatRong(4,5);
    return 0;
}
