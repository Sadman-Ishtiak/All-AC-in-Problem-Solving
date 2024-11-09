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

void solve(int t){
    int ans = 0;
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>>vii(n);
    for (int i = 0; i < n; i++) {
        cin >> vii[i].first >> vii[i].second;
        ans += (int)(k/vii[i].first);
    }
    // for (int i = 0; i < n; i++) {
    //     // if(ans*(vii[0].first+1) != k) ans++;
    // }
    
    cout << "Case " << t+1 << ": " << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve(i);
    }
    return 0;
}