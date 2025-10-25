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


void solve2() {
    int n, k;
    cin >> n >> k;
    string s; cin >> s;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (char c : s) {
        if (c == '0') ++cnt0;
        else if (c == '1') ++cnt1;
        else ++cnt2;
    }

    int tmin = cnt0;
    int tmax = cnt0 + cnt2;
    int m = n - k;

    char ans[n+1];
    ans[n] = '\0';

    for (int i = 1; i <= n; i++) {
        int lo = max(tmin, i - m);
        int hi = min(tmax, i - 1);
        if (lo > hi) ans[i-1] = '-';
        else if ( (i - m) <= tmin && tmax <= (i - 1) )
            ans[i-1] = '+'; 
        else
            ans[i-1] = '?';
    }

    cout << ans << "\n";
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve2();
    return 0;
}