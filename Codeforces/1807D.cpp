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
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int>subst_sum(n+1, 0);
    for (int i = 1; i <= n; i++) {
        subst_sum[i] = subst_sum[i-1] + a[i-1];
    }
    for (int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        int sum = subst_sum[l-1] + (r-l+1)*k + subst_sum[n] - subst_sum[r];
        if(sum%2) YES;
        else NO;
    }
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}