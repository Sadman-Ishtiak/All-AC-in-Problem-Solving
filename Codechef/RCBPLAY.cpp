#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(2*c+a >= b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}