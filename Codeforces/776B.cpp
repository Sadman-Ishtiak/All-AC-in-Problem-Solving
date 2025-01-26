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

void solve(){
    int n;
    cin >> n;
    vector<int>answer(n+100, 1);

    if(n <= 2) {
        cout << 1 << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        return;
    }

    for (auto &&i : primes) {
        if(i < n+100){
            answer[i] = 2;
        }
    }
    
    int fl = *max_element(answer.begin(), answer.end());
    cout << fl << endl;
    for (int i = 2; i <= n+1; i++) {
        cout << answer[i] << " ";
    }
}

int32_t main() {
    int t = 1;
    // cin >> t;
    SieveOfEratosthenes(1000000);
    while(t--) solve();
    return 0;
}