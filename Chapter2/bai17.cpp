#include <iostream>
#include <math.h>
using namespace std;

bool UCLN(int n, int m) {

    for (int i = 2; i <n; i++){
    	if(n%i == 0 && m%i == 0){
            cout << "ko phai";
            return false;
        }
        
	}
    cout<<"Phai";
    return true;
}

int main()
{
    UCLN(9,16);
    return 0;
}