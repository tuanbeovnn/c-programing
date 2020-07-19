#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
	
	int n = 0;
	while(n ++ < 10){
		int x  = rand();
		cout << x << " ";
	}
	//41 18467 6334 26500 19169 15724 11478 29358 26962 24464
	//41 18467 6334 26500 19169 15724 11478 29358 26962 24464
	return 0;
}
