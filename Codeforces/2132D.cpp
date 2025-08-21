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
#define     debug(x)        cerr << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int digits_needs(int n) {
    if (n <= 0) return 0;
    int ans = 0;
    int len = 1;
    int start = 1;
    while (start * 10 <= n) {
        ans += 9 * start * len;
        start *= 10;
        len++;
    }
    ans += (n - start + 1) * len;
    return ans;
}

int sum_of_digits(int n) {
    int ans = 0;
    for (long long i = 1; i <= n; i *= 10) {
        long long higher = n / (i * 10);
        ans += higher * 45 * i;
        long long right = n % i;
        long long current = (n / i) % 10;
        ans += current * (current - 1) / 2 * i;
        ans += current * (right + 1);
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    int l = 0, r = n, mid;
    while (l < r) {
        mid = (l + r + 1)>>1;
        if(digits_needs(mid) <= n) l = mid;
        else r = mid - 1;
    }
    // debug(l)
    int ans = sum_of_digits(l);
    int written = digits_needs(l);
    // debug(written)
    int remains = n - written;
    if(remains > 0) {
        char a[100];
        string s = to_string(l + 1);
        // cerr << s << endl;
        for (int i = 0; i < remains; i++) {
            ans += (s[i] - '0');
        }
    }
    cout << ans << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
