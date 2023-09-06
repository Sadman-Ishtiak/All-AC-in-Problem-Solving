#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int even = 0, odd = 0;
    while(t--){
        int tmp;
        cin >> tmp;
        if(tmp%2 == 0) even++;
        else odd++;
    }
    if(even>odd) cout << "READY FOR BATTLE" << endl;
    else cout << "NOT READY" << endl;
	return 0;
}