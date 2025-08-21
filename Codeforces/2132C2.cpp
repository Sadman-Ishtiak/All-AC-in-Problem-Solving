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

vector<pair<int, int>>deals(25);

long long binpow(long long a, long long b, long long m = __INT64_MAX__) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n, k;
    cin >> n >> k;
    int cost = 0;
    int ctr = 0;
    vector<int>deal_ctr(25, 0);
    for (int i = 25 - 1; i >= 0; i--) {
        while (n >= deals[i].first) {
            n -= deals[i].first;
            cost += deals[i].second;
            ctr++;
            deal_ctr[i]++;
        }
    }
    if(ctr > k) {
        cout << -1 << endl;
        return;
    } else {
        for (int i = 24; i >= 1; i--) {
            if (ctr >= k) break;

            int max_splits = deal_ctr[i];
            int possible = (k - ctr) / 2;
            int splits = min(max_splits, possible);

            if (splits > 0) {
                deal_ctr[i] -= splits;
                deal_ctr[i-1] += 3 * splits;
                ctr += 2 * splits;
            }
        }
        int cc = 0;
        for (int i = 0; i < 25; i++) {
            cc += deal_ctr[i] * deals[i].second;
        }
        cout << cc << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    for (int i = 0; i < 25; i++) {
        deals[i].first = binpow(3, i);
        deals[i].second = binpow(3, i+1) + i * binpow(3, i-1);
        // cerr << deals[i].first << " " << deals[i].second << endl;
    }
    
    while(t--) solve();
    return 0;
}