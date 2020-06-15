#include<iostream>
using namespace std;
void hinhchunhatRong(int col,int row) {
    int i;
    int j;
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j== col)
            {
                cout<<"*";
            }else
            {
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