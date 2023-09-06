#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a*c >= b) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
	return 0;
}