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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int>mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]] = 0;
    }
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    if(n == 5) {
        if(mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1) YES;
        else NO;
    } else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}