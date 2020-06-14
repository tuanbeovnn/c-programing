#include<iostream>
#include<math.h>
using namespace std;

int uocCuaSo(int n) {
    int count = 0;
    for (int i = 1; i <n; i++){
    	if(n%i == 0){
            cout<<"cac uoc cua so la: "<<i<<endl;
            count++;
		}
	}
    return count;
}

bool checkSNT(int n) {
    if (n == 0)
        return false;

    for(int i = 2; i <= sqrt(n) ; i ++) {
        if(n%i == 0)
            return false; // logic 2
    }
    return true;
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Dem so uoc cua so nhap la: "<<uocCuaSo(n)<< endl;

    int num = uocCuaSo(n);
    for (int i = 1; i < num; i++)
    {
       if (checkSNT(i))
       {
          cout<<"So nguyen to cua uoc so la: "<<i<<endl;
       }
       
    }
    return 0;
}