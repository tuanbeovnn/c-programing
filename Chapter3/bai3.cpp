#include<iostream>
using namespace std;
void tamgiaccan(int n) {
    int i;
    int j;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout <<"\n";
	}
}

int main() {
    tamgiaccan(5);
    return 0;
}