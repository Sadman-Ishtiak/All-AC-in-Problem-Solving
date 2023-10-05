#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    cout << (b + (100 - a) * c) * 10 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}