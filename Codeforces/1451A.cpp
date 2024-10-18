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

int prime_calculation_limit = 10000;
vector<bool>isprime(prime_calculation_limit,true);
set<int>primes;
void calcPrimes() {
    isprime[0] = false;
    isprime[1] = false;
    for (int i = 2; i < prime_calculation_limit; i++) {
        if(isprime[i] == true) {
            primes.insert(i);
            for (int j = 2*i; j < prime_calculation_limit; j+=i) {
                isprime[j] = false;
            }
        }
    }
    // cout << endl;
}




void solve(){
    int n;
    cin >> n;
    int ans = 0;
    while (n > 1) {
        if(n%2 == 0 && n > 2) n = 2;
        // else if(n == 2) n--;
        else n--;
        ans++;
    }
    cout << ans << endl;
}
int32_t main() {
    calcPrimes();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}