#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x,p;
        cin >> n >> x >> p;
        int m = 3*x-(n-x);
        if(m>=p) cout << "PASS" << endl;
        else cout << "FAIL" << endl;
    }
	return 0;
}