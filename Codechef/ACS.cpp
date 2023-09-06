#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int hundo = n/100;
        int onesies = n % 100;
        if(hundo+onesies <= 10) cout << hundo+onesies << endl;
        else cout << -1 << endl;
    }
	return 0;
}