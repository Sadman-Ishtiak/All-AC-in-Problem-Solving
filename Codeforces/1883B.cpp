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
    int n, k;
    cin >> n >> k;
    char c;
    map<char, int>mp;
    for (char i = 'a'; i <= 'z'; i++) {
        mp[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> c;
        mp[c]++;
    }
    bool ans = true;
    for (auto &&i : mp) {
        k -= i.second&1LL;
    }
    if(k < -1) NO;
    else YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}