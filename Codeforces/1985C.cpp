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
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    // Main task

    int sum = 0, m = a[0];
    if (m == 0)
        ans++;
    sum += a[0];
    for (int i = 1; i < n; i++){
        sum += a[i];
        m = max(m, a[i]);
        if (sum - m == m)
            ans++;
    }
    
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}