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

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    map<int, int>counter;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counter[a[i]] = 0;
    }
    for (int i = 0; i < n; i++) {
        counter[a[i]]++;
    }
    bool exchangable = false;
    for (auto &&i : counter) {
        if(i.second >= k) exchangable = true;
    }
    if(!exchangable) cout << n << endl;
    else cout << k-1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}