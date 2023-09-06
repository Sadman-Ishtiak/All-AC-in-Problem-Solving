#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        if(a > b*c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}