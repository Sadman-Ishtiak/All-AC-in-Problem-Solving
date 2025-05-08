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

set<int>possible_s;

void solve(){
    int n, s, mx = 0;
    cin >> n >> s;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    s += accumulate(all(a), 0LL);
    s -= ( mx*(mx+1))/2;
    while (s > 0) {
        mx++;
        s -= mx;
    }
    if(s == 0) YES;
    else NO;
}

int32_t main() {
    int t = 1;
    for (int i = 1; i < 1000000; i++) {
        possible_s.insert(i*(i+1)/2);
    }
    cin >> t;
    while(t--) solve();
    return 0;
}