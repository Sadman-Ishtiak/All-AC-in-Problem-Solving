#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n < 3){
        cout << 0 << endl;
        return;
    }
    ll ans = max((n-2)/2, 0LL) + int(n&1);
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}