#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

set<int>primes = {2};
 
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
            primes.insert(p);
}

vector<int>DP(1000000, 0);

void solve(){
    int l, r;
    cin >> l >> r;
    cout << DP[r] - DP[l-1] << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    SieveOfEratosthenes(1000000);
    for (auto &&i : primes) {
        // cout << i << " ";
        if(primes.find((i+1)/2) != primes.end()) DP[i] = 1;
    }
    for (int i = 1; i < 1000000; i++) {
        DP[i] += DP[i-1];
    }
    while(t--) solve();
    return 0;
}