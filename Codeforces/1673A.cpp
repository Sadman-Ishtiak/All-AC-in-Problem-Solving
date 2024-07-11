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

map<char, int>val;

void solve(){
    string s;
    cin >> s;
    int ans = 0;
    int n = s.length();
    if(n == 1) cout << "Bob " << val[s[0]] << endl;
    else if(n%2 == 0){
        for (int i = 0; i < n; i++){
            ans += val[s[i]];
        }
        cout << "Alice " << ans << endl;
    } else {
        int alice = 0, bob = 0;
        if(s[0] > s[n-1]) {
            bob = val[s[n-1]];
            for (int i = 0; i < n-1; i++) {
                alice += val[s[i]];
            }
        } else {
            bob = val[s[0]];
            for (int i = 1; i < n; i++) {
                alice += val[s[i]];
            }
        }
        if(alice > bob) cout << "Alice " << alice - bob << endl;
        else cout << "Bob " << bob - alice << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;

    for (char i = 'a'; i <= 'z'; i++){
        val[i] = i - 'a' + 1;
    }

// for (auto &&i : val) {
//     cout << i.first << "=" << i.second << endl;
// }

    while(t--) solve();
    return 0;
}