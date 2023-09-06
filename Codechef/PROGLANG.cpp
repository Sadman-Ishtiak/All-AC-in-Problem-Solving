#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int f1,f2,a1,a2,b1,b2;
        cin >> f1 >> f2 >> a1 >> a2 >> b1 >> b2 ;
        if ((f1==a1|| f1==a2)&&(f2==a1||f2==a2))
            cout << 1 << endl;
        else if ((f1==b1|| f1==b2)&&(f2==b1||f2==b2))
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }
	return 0;
}