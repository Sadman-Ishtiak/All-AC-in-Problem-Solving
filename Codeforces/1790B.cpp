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
    int n, s, r;
    cin >> n >> s >> r;
    int maxface = s - r;
    vector<int>ans(n, 1);
    ans[0] = maxface;
    int sum = n - 1 + maxface;
    int curr = 1;
    while (sum < s){
        sum++;
        if(ans[curr] == ans[0]) curr++;
        ans[curr]++;
    }
    // debug(sum)
    // debug(s)
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}