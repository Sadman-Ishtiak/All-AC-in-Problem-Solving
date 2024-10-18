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
        // if(a[i] == -1) a[i] = 0;
    }
    int ans = 0, flag = 0;
    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x != -1)
        {
            // cout << x << " " << a[x] << endl;
            x = a[x];
            flag++;
        }
        ans = max(ans, flag);
        flag = 0;
    }
    cout << ans;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}