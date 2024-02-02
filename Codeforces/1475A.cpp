#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
#define endl '\n'
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

using namespace std;
vector<int> SieveOfEratosthenes(int n);

void solve(){
    int n;
    cin >> n;
    float k = log2l(n);
    if(floor(k) == k) NO;
    else YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
vector<int> SieveOfEratosthenes(int n){
    bool prime[n + 1];
    vector<int>a;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            a.push_back(p);
    return a;
}