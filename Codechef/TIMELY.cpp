#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n>=30)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}