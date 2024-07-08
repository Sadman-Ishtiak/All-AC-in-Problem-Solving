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

map<char, int>valus;

void solve(){
    string s;
    cin >> s;
    char current = '1';
    int ans = 0;
    for (int i = 0; i < 4; i++){
        if(current == s[i]) {
            ans++;
        } else {
            ans += abs(valus[s[i]] - valus[current]);
            ans++;
            current = s[i];
        }
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    valus['0'] = 10;
    for (char i = '1'; i <= '9'; i++){
        valus[i] = i - '0';
    }
    while(t--) solve();
    return 0;
}