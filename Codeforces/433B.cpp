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
    int n;
    cin >> n;
    vector<int>a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int>sorted_sum(n+1, 0), unsorted_sum(n+1, 0);
    for (int i = 1; i <= n; i++) {
        unsorted_sum[i] = a[i] + unsorted_sum[i-1];
    }
    sort(a)
    for (int i = 1; i <= n; i++) {
        sorted_sum[i] = a[i] + sorted_sum[i-1];
    }
    int q, l, r;
    for (int i = 0; i < m; i++) {
        cin >> q >> l >> r;
        if(q == 1) cout << unsorted_sum[r] - unsorted_sum[l-1] << endl;
        else cout << sorted_sum[r] - sorted_sum[l-1] << endl;
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}