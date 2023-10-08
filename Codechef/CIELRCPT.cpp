#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll n;
    cin >> n;
    int ans = 0;
    while(n > 0){
        int p = (int)log2l(min(2048LL,n));
        n -= pow(2,p);
        ans++;
    }
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