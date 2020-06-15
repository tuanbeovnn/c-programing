#include<iostream>
using namespace std;
void uochung(int n) {
    for (int i = 1; i <n; i++){
    	if(n%i == 0){
    		cout << i << " " << endl;
		}
	}

	// O(n)

    // O(n/2)

	// 1 2 3 | 4 6 12
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    uochung(n);
    system("pause");
    return 0;
}
