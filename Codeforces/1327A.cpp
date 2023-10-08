#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    if(n%2 == k%2 && k*k <= n) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}