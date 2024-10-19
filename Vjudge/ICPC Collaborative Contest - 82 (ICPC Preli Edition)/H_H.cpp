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
    int n, n2;
    cin >> n;
    n2 = 2*n;
    vector<int>arr(2*n);
    for (int i = 0; i < n2; i++) {
        cin >> arr[i];
    }
    sort(arr)
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(arr[i] - arr[n2-i-1]);
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}