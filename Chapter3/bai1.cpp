#include<iostream>
using namespace std;
void hinhchunhat(int n,int m) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout <<"\n";
	}
}

int main() {
    hinhchunhat(4,5);
    return 0;
}