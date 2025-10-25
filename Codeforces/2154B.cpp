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

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> P(n);
    P[0] = a[0];
    for(int i = 1; i < n; i++) {
        P[i] = max(P[i-1], a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i+=2) {
        int unvalid = INT32_MAX;
        int left = (i - 1 >= 0) ? P[i - 1] : unvalid;
        int right = (i + 1 < n) ? P[i + 1] : unvalid;
        int min_neighbor = min(left, right);
        int allowed = min_neighbor - 1;
        if (a[i] > allowed) {
            ans += a[i] - allowed;
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