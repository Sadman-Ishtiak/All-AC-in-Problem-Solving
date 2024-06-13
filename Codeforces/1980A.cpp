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
    int n, m;
    cin >> n >>m;
    char s[n+1];
    cin >> s;
    int probs[7] = {0};
    for (int i = 0; i < n; i++){
        probs[s[i] - 'A']++;
    }
    // for (int i = 0; i < 7; i++){
    //     // cout << (char)('A' + i) << ":" <<probs[i] << endl;
    // }
    int ans = 0;
    for (int i = 0; i < 7; i++){
        ans += max(0LL, m-probs[i]);
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}