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

vector<vector<int>>prime_factors(1e6);
void get_prime_factors(int n) {
    vector<bool>isPrime(n+1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= n; i++) {
        if(isPrime[i]) {
            for (int j = i+i; j <= n; j += i) {
                isPrime[j] = false;
                prime_factors[j].push_back(i);
            }
        }
    }
}

void solve(){
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i < r; i++) {
        if(i&1LL && i+2<=r) {
            ans++;
            i += 2;
        }
    }
    cout << ans << endl;
}


int32_t main() {
    int t = 1;
    cin >> t;
    // get_prime_factors(10000);
    // for (int i = 0; i <= 10000; i++) {
    //     cout << i << " : ";
    //     for (auto &&j : prime_factors[i]) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    
    while(t--) solve();
    return 0;
}