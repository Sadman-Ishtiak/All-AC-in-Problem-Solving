#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=70)
            cout << 0 << endl;
        else if(n<=100)
            cout << 500 << endl;
        else
            cout << 2000 << endl;
    }
	return 0;
}