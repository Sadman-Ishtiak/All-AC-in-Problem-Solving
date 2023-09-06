#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a>b)
            cout << "LOSS" << endl;
        else if(a<b)
            cout << "PROFIT" << endl;
        else
            cout << "NEUTRAL" << endl;
    }
	return 0;
}