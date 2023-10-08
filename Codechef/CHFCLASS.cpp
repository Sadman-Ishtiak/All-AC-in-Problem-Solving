#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll n, ans = 0;
    cin >> n;
    if(n <= 5){
        cout << 0 << endl;
        return;
    }
    n -= 6;
    ans ++;
    ans += n/7;
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