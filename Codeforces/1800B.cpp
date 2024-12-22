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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int>cmap;
    for (char i = 'a'; i <= 'z'; i++) {
        cmap[i] = 0;
    }
    for (char i = 'A'; i <= 'Z'; i++) {
        cmap[i] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cmap[s[i]]++;
    }
    for (char i = 'a', j = 'A'; i <= 'z' && j <= 'Z'; i++, j++) {
        if (cmap[i] == cmap[j]) {
            ans += cmap[i];
        }
        else {
            ans += min(cmap[i], cmap[j]);
            int diff = abs(cmap[i] - cmap[j])/2;
            ans += min({diff, max(0LL, k)});
            k-= diff;
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