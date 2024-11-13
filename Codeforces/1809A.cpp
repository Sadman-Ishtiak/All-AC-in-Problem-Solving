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
    string s;
    cin >> s;
    map<char, int> chars;
    for (auto &&i : s) {
        if(chars.find(i) == chars.end())
            chars[i] = 0;
        chars[i]++;
    }
    if(chars.size() == 1) cout << "-1\n";
    else if(chars.size() == 4) cout << "4\n";
    else {
        int mx = 0;
        for (auto &&i : s) {
            mx = max(mx, chars[i]);
        }
        if(mx == 2) cout << 4 << endl;
        else cout << 6 << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}