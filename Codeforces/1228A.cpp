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
    int l,r;
    cin >> l >> r;
    if(l <= r) {
        for (int i = l; i <= r; i++) {
            string s = to_string(i);
            map<char, int>mp;
            bool is_ans = true;
            for (auto &&x : s) mp[x] = 0;
            for( auto &&x : s) mp[x]++;
            for (auto &&x : s) {
                if(mp[x] > 1) is_ans = false;
            }
            if(is_ans) {
                cout << i << endl;
                return;
            }
        }
        cout << -1 << endl;
    } else cout << -1 << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}