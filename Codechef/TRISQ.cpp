#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll n;
    cin >> n;
    n /= 2;
    ll ans = n*(n-1)/2;
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