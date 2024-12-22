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
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int a = -1, b = -1, diff = 0;
    for (int i = 0; i < n; i++) {
        if(s1[i] != s2[i]) {
            diff++;
            if(a == -1) a = i;
            else b = i;
        }
    }
    if(diff == 0) YES;
    else if(diff == 2 && s1[a] == s1[b] && s2[a] == s2[b] && s1[a] != s2[a] && s1[b] != s2[b]) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}