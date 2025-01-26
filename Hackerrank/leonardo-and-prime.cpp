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

set<int> primes = {2};
void SieveOfEratosthenes(int n) {
    if (n < 2) return;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            // Mark multiples of p as not prime, starting from p * p
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }
    // Collect all prime numbers
    primes.clear();
    for (int p = 2; p <= n; p++) {
        if (is_prime[p]) primes.insert(p);
    }
}

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    __int128_t maxprimefactor = 1;
    for (auto &&i : primes) {
        maxprimefactor *= i;
        if(maxprimefactor > n) {
            break;
        }
        ans++;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    SieveOfEratosthenes(1000);
    while(t--) solve();
    return 0;
}