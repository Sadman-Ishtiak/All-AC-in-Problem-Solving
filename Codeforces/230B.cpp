#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

set<int> dp = {2};

void SieveOfEratosthenes(int n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            dp.insert(p);
} 

void solve(){
    ll n;
    cin >> n;
    ll a = sqrt(n);
    if(a*a == n){
        if(dp.find(a) != dp.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    SieveOfEratosthenes(1000001);
    // for(auto i : dp) cout << i << " ";
    // cout << dp.size() << endl;
    while(t--){
        solve();
    }
	return 0;
}