#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
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
    int a = 0, b = 0, c = 0;
    for (int i = 2; i*i < n; i++) {
        if(n%i == 0) {
            // cerr << i << " ";
            if(a == 0)
                a = i;
            else if(b == 0){
                b = i;
                c = n/b;
                break;
            }
            n /= i;
        }
    }
    // cerr << endl;
    if(a*b*c != 0){
        YES;
        cout << a << " " << b << " " << c << endl;
    }
    else NO;
}
int32_t main() {
    int t = 1;
    SieveOfEratosthenes(1000000);
    cin >> t;
    while(t--) solve();
    return 0;
}